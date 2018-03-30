#ifndef INCLUDE_FWD____TIMED_ATOMEPORT__FWD____TIMED__TIMEPORT_HPP_
#define INCLUDE_FWD____TIMED_ATOMEPORT__FWD____TIMED__TIMEPORT_HPP_

#include <AtomExportPort.hpp>
#include <fwd__timed/AtomIPort_fwd__timed_TimePort.hpp>

#include <fwd__timed/PT_fwd__timed_TimePort.hpp>

class AtomEPort_fwd__timed_TimePort :
    public virtual Port,
    public AtomExportPort,
    public PT_fwd__timed_TimePort {
public:
    AtomEPort_fwd__timed_TimePort(const string &name);
    virtual ~AtomEPort_fwd__timed_TimePort();
    virtual void addInternalPort(AtomIPort_fwd__timed_TimePort &p);

    virtual vector<PortValue *> &portValues();
    virtual const vector<PortValue *> &portValues() const;
    virtual bool hasPortValues() const;
    virtual void addPortValue(PortValue &port);
    virtual void clearPortValues();

    virtual bool isReset() const;
    void setIsReset(bool b);

protected:
// Getting messy to store actual type and return more abstract one (thanks to vector template...)
//    vector<PV_fwd__timed_TimePort *> mPortValues;
    vector<PortValue *> mPortValues;
    bool mIsReset;
}; 


inline
void AtomEPort_fwd__timed_TimePort::addInternalPort(AtomIPort_fwd__timed_TimePort &p) {
    AtomExportPort::addInternalPort(p);
}

inline
vector<PortValue *> &AtomEPort_fwd__timed_TimePort::portValues() {
    return mPortValues;
}

inline
const vector<PortValue *> &AtomEPort_fwd__timed_TimePort::portValues() const {
    return mPortValues;
}

inline
bool AtomEPort_fwd__timed_TimePort::hasPortValues() const {
    return !mPortValues.empty();
}

inline
void AtomEPort_fwd__timed_TimePort::addPortValue(PortValue &port) {
    mPortValues.push_back(&port);
}

inline
void AtomEPort_fwd__timed_TimePort::clearPortValues() {
    mPortValues.clear();
}

inline
bool AtomEPort_fwd__timed_TimePort::isReset() const {
    return mIsReset;
}

inline
void AtomEPort_fwd__timed_TimePort::setIsReset(bool b) {
    mIsReset = b;
}
#endif // INCLUDE_FWD____TIMED_ATOMEPORT__FWD____TIMED__TIMEPORT_HPP_
