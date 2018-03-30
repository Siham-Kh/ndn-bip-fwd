#ifndef INCLUDE_FWD____TIMED_INTER__FWD____TIMED__BROAD_HPP_
#define INCLUDE_FWD____TIMED_INTER__FWD____TIMED__BROAD_HPP_

#include <Interaction.hpp>
#include <Connector.hpp>

#include <bitset>

class Port;
class ConnT_fwd__timed_broad;

class PT_fwd__timed_trans;

class Inter_fwd__timed_broad :  public Interaction {
public:
    virtual ~Inter_fwd__timed_broad();

    // Implementation for get/set declared pure virtual in interface
    virtual const vector<Port *> &ports() const;
    virtual bool hasPorts() const;
    virtual void addPort(Port &port);
    virtual void removePort(Port &port);

    Inter_fwd__timed_broad(const ConnT_fwd__timed_broad &connector);
    Inter_fwd__timed_broad(const ConnT_fwd__timed_broad &connector, const vector<Port *> &ports);
    Inter_fwd__timed_broad(const ConnT_fwd__timed_broad &connector, bool s, bool r);

    virtual void recycle();
    void recycle(const vector<Port *> &ports);

    bool operator<=(const Interaction &interaction) const;
    bool operator==(const Interaction &interaction) const;
    bool operator!=(const Interaction &interaction) const;
    bool operator<(const Interaction &interaction) const;
    bool nonEmptyIntersection(const Interaction &interaction) const;

    bool isDefined() const;
    bool hasSubDefined() const;

protected:
    // Implementation for get/set declared pure virtual in interface
    virtual vector<Port *> &ports();
    void refreshPorts() const ;
    mutable bool port_vector_fresh;
    mutable vector<Port *> mPorts;

    bitset<2> involvedPorts;

    mutable bool defined;
    mutable bool refresh_defined;

private:
    vector<Port *>::size_type findPort(const Port *p) const;
    void commonRecycle(const vector<Port *> &ports);
    bool en(size_t index) const;

    static const bitset<2> predefined;
};

inline
vector<Port *>::size_type Inter_fwd__timed_broad::findPort(const Port *p) const {
    vector<Port *>::size_type idx;

    idx = 0;
    for (vector<QuotedPortReference *>::const_iterator i = connector().ports().begin();
         i != connector().ports().end();
         i++, idx++) {
         if (p == &((*i)->port())) {
             break;
         }
    }
    assert(idx < connector().ports().size()); // means we couldn't find the corresponding port.
    return idx;
}

inline bool Inter_fwd__timed_broad::en(size_t index) const {
    return involvedPorts.test(index);
}

inline bool Inter_fwd__timed_broad::isDefined() const {
    if (refresh_defined) {
        refresh_defined = false;
        defined = (involvedPorts & predefined).any();
    }
    return defined;
}

inline bool Inter_fwd__timed_broad::hasSubDefined() const {
    return isDefined();
}

inline
bool Inter_fwd__timed_broad::hasPorts() const {
    return involvedPorts.any();
}

inline
void Inter_fwd__timed_broad::addPort(Port &port){
    const vector<Port *>::size_type post_shift = findPort(&port);

    if (!(involvedPorts.test(post_shift))) {
        involvedPorts.set(post_shift);
        port_vector_fresh = false;
        refresh_defined = true;
    }
}

inline
void Inter_fwd__timed_broad::removePort(Port &port){
    const vector<Port *>::size_type post_shift = findPort(&port);

    if (involvedPorts.test(post_shift)) {
        involvedPorts.reset(post_shift);
        port_vector_fresh = false;
        refresh_defined = true;
    }
}

inline
bool Inter_fwd__timed_broad::operator!=(const Interaction &interaction) const {
    return ! (*this == interaction);
}

inline
bool Inter_fwd__timed_broad::nonEmptyIntersection(const Interaction &interaction) const {
    bool ret = false;

    // check if interactions are from the same connector
    if (&connector() == &interaction.connector()) {
        assert(dynamic_cast<const Inter_fwd__timed_broad *>(&interaction) != NULL);
        const Inter_fwd__timed_broad *other = static_cast<const Inter_fwd__timed_broad *>(&interaction);
        ret = ((involvedPorts & other->involvedPorts).any());
    }
    return ret;
}

#endif // INCLUDE_FWD____TIMED_INTER__FWD____TIMED__BROAD_HPP_
