#ifndef INCLUDE_FWD____TIMED_ATOMIPORT__FWD____TIMED__TRANS_HPP_
#define INCLUDE_FWD____TIMED_ATOMIPORT__FWD____TIMED__TRANS_HPP_

#include <AtomInternalPort.hpp>

#include <fwd__timed/PT_fwd__timed_trans.hpp>
#include <fwd__timed/PV_fwd__timed_trans.hpp>

class AtomIPort_fwd__timed_trans : public AtomInternalPort {
public:
    AtomIPort_fwd__timed_trans(const string &name);
    virtual ~AtomIPort_fwd__timed_trans();

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
    PV_fwd__timed_trans *mPortValue;

private:
    bool mIsEnabled;
    // data fields from Port type.
    int *m_d;
}; 

inline
PortValue &AtomIPort_fwd__timed_trans::portValue() const {
    return *mPortValue;
}

inline
bool AtomIPort_fwd__timed_trans::hasPortValue() const {
    return mPortValue != NULL;
}

inline
void AtomIPort_fwd__timed_trans::setPortValue(PortValue &portValue) {
    assert(dynamic_cast<PV_fwd__timed_trans *>(&portValue) != NULL);
    mPortValue = static_cast<PV_fwd__timed_trans *> (&portValue);
}
inline
void AtomIPort_fwd__timed_trans::clearPortValue() {
    mPortValue = NULL;
}

inline
bool AtomIPort_fwd__timed_trans::isEnabled() const {
    return mIsEnabled;
}

inline
void AtomIPort_fwd__timed_trans::setIsEnabled(bool b) {
    mIsEnabled = b;
}

    // data fields from Port type.
inline
void AtomIPort_fwd__timed_trans::setPtr_d(int *_val) {
    m_d = _val;
}

#endif // INCLUDE_FWD____TIMED_ATOMIPORT__FWD____TIMED__TRANS_HPP_
