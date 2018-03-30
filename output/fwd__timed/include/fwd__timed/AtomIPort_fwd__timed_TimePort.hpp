#ifndef INCLUDE_FWD____TIMED_ATOMIPORT__FWD____TIMED__TIMEPORT_HPP_
#define INCLUDE_FWD____TIMED_ATOMIPORT__FWD____TIMED__TIMEPORT_HPP_

#include <AtomInternalPort.hpp>

#include <fwd__timed/PT_fwd__timed_TimePort.hpp>
#include <fwd__timed/PV_fwd__timed_TimePort.hpp>

class AtomIPort_fwd__timed_TimePort : public AtomInternalPort {
public:
    AtomIPort_fwd__timed_TimePort(const string &name);
    virtual ~AtomIPort_fwd__timed_TimePort();

    PortValue &portValue() const;
    bool hasPortValue() const;
    void setPortValue(PortValue &portValue);
    void clearPortValue();

    // data fields from Port type.
    void setPtr_d(int *_val);
    void syncFromPortValue() const;
    void syncToPortValue() const;

    bool isEnabled() const;
    void setIsEnabled(bool b);

protected:
    PV_fwd__timed_TimePort *mPortValue;

private:
    bool mIsEnabled;
    // data fields from Port type.
    int *m_d;
}; 

inline
PortValue &AtomIPort_fwd__timed_TimePort::portValue() const {
    return *mPortValue;
}

inline
bool AtomIPort_fwd__timed_TimePort::hasPortValue() const {
    return mPortValue != NULL;
}

inline
void AtomIPort_fwd__timed_TimePort::setPortValue(PortValue &portValue) {
    assert(dynamic_cast<PV_fwd__timed_TimePort *>(&portValue) != NULL);
    mPortValue = static_cast<PV_fwd__timed_TimePort *> (&portValue);
}
inline
void AtomIPort_fwd__timed_TimePort::clearPortValue() {
    mPortValue = NULL;
}

inline
bool AtomIPort_fwd__timed_TimePort::isEnabled() const {
    return mIsEnabled;
}

inline
void AtomIPort_fwd__timed_TimePort::setIsEnabled(bool b) {
    mIsEnabled = b;
}

    // data fields from Port type.
inline
void AtomIPort_fwd__timed_TimePort::setPtr_d(int *_val) {
    m_d = _val;
}

#endif // INCLUDE_FWD____TIMED_ATOMIPORT__FWD____TIMED__TIMEPORT_HPP_
