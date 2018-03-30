#ifndef INCLUDE_FWD____TIMED_ATOMIPORT__FWD____TIMED__TRIGGER_HPP_
#define INCLUDE_FWD____TIMED_ATOMIPORT__FWD____TIMED__TRIGGER_HPP_

#include <AtomInternalPort.hpp>

#include <fwd__timed/PT_fwd__timed_trigger.hpp>
#include <fwd__timed/PV_fwd__timed_trigger.hpp>

class AtomIPort_fwd__timed_trigger : public AtomInternalPort {
public:
    AtomIPort_fwd__timed_trigger(const string &name);
    virtual ~AtomIPort_fwd__timed_trigger();

    PortValue &portValue() const;
    bool hasPortValue() const;
    void setPortValue(PortValue &portValue);
    void clearPortValue();

    void syncFromPortValue() const;
    void syncToPortValue() const;

    bool isEnabled() const;
    void setIsEnabled(bool b);

protected:
    PV_fwd__timed_trigger *mPortValue;

private:
    bool mIsEnabled;
}; 

inline
PortValue &AtomIPort_fwd__timed_trigger::portValue() const {
    return *mPortValue;
}

inline
bool AtomIPort_fwd__timed_trigger::hasPortValue() const {
    return mPortValue != NULL;
}

inline
void AtomIPort_fwd__timed_trigger::setPortValue(PortValue &portValue) {
    assert(dynamic_cast<PV_fwd__timed_trigger *>(&portValue) != NULL);
    mPortValue = static_cast<PV_fwd__timed_trigger *> (&portValue);
}
inline
void AtomIPort_fwd__timed_trigger::clearPortValue() {
    mPortValue = NULL;
}

inline
bool AtomIPort_fwd__timed_trigger::isEnabled() const {
    return mIsEnabled;
}

inline
void AtomIPort_fwd__timed_trigger::setIsEnabled(bool b) {
    mIsEnabled = b;
}


#endif // INCLUDE_FWD____TIMED_ATOMIPORT__FWD____TIMED__TRIGGER_HPP_
