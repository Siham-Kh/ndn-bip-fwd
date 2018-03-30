#ifndef INCLUDE_FWD____TIMED_ATOMEPORT__FWD____TIMED__TRANS_HPP_
#define INCLUDE_FWD____TIMED_ATOMEPORT__FWD____TIMED__TRANS_HPP_

#include <AtomExportPort.hpp>
#include <fwd__timed/AtomIPort_fwd__timed_trans.hpp>

#include <fwd__timed/PT_fwd__timed_trans.hpp>

class AtomEPort_fwd__timed_trans :
    public virtual Port,
    public AtomExportPort,
    public PT_fwd__timed_trans {
public:
    AtomEPort_fwd__timed_trans(const string &name);
    virtual ~AtomEPort_fwd__timed_trans();
    virtual void addInternalPort(AtomIPort_fwd__timed_trans &p);

    virtual vector<PortValue *> &portValues();
    virtual const vector<PortValue *> &portValues() const;
    virtual bool hasPortValues() const;
    virtual void addPortValue(PortValue &port);
    virtual void clearPortValues();

    virtual bool isReset() const;
    void setIsReset(bool b);

protected:
// Getting messy to store actual type and return more abstract one (thanks to vector template...)
//    vector<PV_fwd__timed_trans *> mPortValues;
    vector<PortValue *> mPortValues;
    bool mIsReset;
}; 


inline
void AtomEPort_fwd__timed_trans::addInternalPort(AtomIPort_fwd__timed_trans &p) {
    AtomExportPort::addInternalPort(p);
}

inline
vector<PortValue *> &AtomEPort_fwd__timed_trans::portValues() {
    return mPortValues;
}

inline
const vector<PortValue *> &AtomEPort_fwd__timed_trans::portValues() const {
    return mPortValues;
}

inline
bool AtomEPort_fwd__timed_trans::hasPortValues() const {
    return !mPortValues.empty();
}

inline
void AtomEPort_fwd__timed_trans::addPortValue(PortValue &port) {
    mPortValues.push_back(&port);
}

inline
void AtomEPort_fwd__timed_trans::clearPortValues() {
    mPortValues.clear();
}

inline
bool AtomEPort_fwd__timed_trans::isReset() const {
    return mIsReset;
}

inline
void AtomEPort_fwd__timed_trans::setIsReset(bool b) {
    mIsReset = b;
}
#endif // INCLUDE_FWD____TIMED_ATOMEPORT__FWD____TIMED__TRANS_HPP_
