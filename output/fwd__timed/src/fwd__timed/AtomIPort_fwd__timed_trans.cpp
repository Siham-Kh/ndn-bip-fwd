#include <fwd__timed/AtomIPort_fwd__timed_trans.hpp>

AtomIPort_fwd__timed_trans::AtomIPort_fwd__timed_trans(const string &name) : AtomInternalPort(name),
    mIsEnabled(false) {
}

void AtomIPort_fwd__timed_trans::syncFromPortValue() const {
    // data fields from Port type.
    *m_d = mPortValue->get_d();
}

void AtomIPort_fwd__timed_trans::syncToPortValue() const {
    // data fields from Port type.
    mPortValue->set_d(*m_d);
}

AtomIPort_fwd__timed_trans::~AtomIPort_fwd__timed_trans() {
}
