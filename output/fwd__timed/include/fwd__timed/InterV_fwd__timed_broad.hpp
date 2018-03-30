#ifndef INCLUDE_FWD____TIMED_INTERV__FWD____TIMED__BROAD_HPP_
#define INCLUDE_FWD____TIMED_INTERV__FWD____TIMED__BROAD_HPP_


#include <fwd__timed/Inter_fwd__timed_broad.hpp>

class Port;
class PortValue;
class ConnT_fwd__timed_broad;

class InterV_fwd__timed_broad : public InteractionValue {
public:
    virtual ~InterV_fwd__timed_broad();

    // getters for references (declared pure virtual in interface)
    virtual const Interaction &interaction() const { return mInteraction; }
    virtual const vector<PortValue *> &portValues() const;
    virtual bool hasPortValues() const;

    // specific operations
    const vector<Port *> &ports() const { return mInteraction.ports(); }

    // Only allow the connector to call the ctor here (see createInteractionValue() method)
    friend class ConnT_fwd__timed_broad;

protected:
    InterV_fwd__timed_broad(const ConnT_fwd__timed_broad &connector, const Interaction& interaction, const vector<PortValue *> &values);
    Inter_fwd__timed_broad mInteraction;
    vector<PortValue *> &portValues();
    vector<PortValue *> mPortValues;

    void commonRecycle(const Interaction& interaction, const vector<PortValue *> &values);

}; 

inline
const vector<PortValue *> &InterV_fwd__timed_broad::portValues() const {
    return this->mPortValues;
}

inline
bool InterV_fwd__timed_broad::hasPortValues() const {
    return (!this->mPortValues.empty());
}

inline
vector<PortValue *> &InterV_fwd__timed_broad::portValues() {
    return mPortValues;
}

#endif // INCLUDE_FWD____TIMED_INTERV__FWD____TIMED__BROAD_HPP_
