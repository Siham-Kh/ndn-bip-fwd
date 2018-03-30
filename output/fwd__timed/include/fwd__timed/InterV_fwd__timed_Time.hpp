#ifndef INCLUDE_FWD____TIMED_INTERV__FWD____TIMED__TIME_HPP_
#define INCLUDE_FWD____TIMED_INTERV__FWD____TIMED__TIME_HPP_


#include <fwd__timed/Inter_fwd__timed_Time.hpp>
// port values for exported port.
#include <fwd__timed/CPV_Time__TimePort.hpp>

class Port;
class PortValue;
class ConnT_fwd__timed_Time;

class InterV_fwd__timed_Time : public InteractionValue {
public:
    virtual ~InterV_fwd__timed_Time();

    // getters for references (declared pure virtual in interface)
    virtual const Interaction &interaction() const { return mInteraction; }
    virtual const vector<PortValue *> &portValues() const;
    virtual bool hasPortValues() const;

    // specific operations
    const vector<Port *> &ports() const { return mInteraction.ports(); }

    // Only allow the connector to call the ctor here (see createInteractionValue() method)
    friend class ConnT_fwd__timed_Time;

protected:
    InterV_fwd__timed_Time(const ConnT_fwd__timed_Time &connector, const Interaction& interaction, const vector<PortValue *> &values);
    Inter_fwd__timed_Time mInteraction;
    vector<PortValue *> &portValues();
    vector<PortValue *> mPortValues;

    void commonRecycle(const Interaction& interaction, const vector<PortValue *> &values);

    mutable CPV_Time__TimePort mExportedPortValue;
}; 

inline
const vector<PortValue *> &InterV_fwd__timed_Time::portValues() const {
    return this->mPortValues;
}

inline
bool InterV_fwd__timed_Time::hasPortValues() const {
    return (!this->mPortValues.empty());
}

inline
vector<PortValue *> &InterV_fwd__timed_Time::portValues() {
    return mPortValues;
}

#endif // INCLUDE_FWD____TIMED_INTERV__FWD____TIMED__TIME_HPP_
