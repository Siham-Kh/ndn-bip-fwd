#include <fwd__timed/AtomIPort_fwd__timed_TimePort.hpp>

AtomIPort_fwd__timed_TimePort::AtomIPort_fwd__timed_TimePort(const string &name) : AtomInternalPort(name),
    mIsEnabled(false) {
}

void AtomIPort_fwd__timed_TimePort::syncFromPortValue() const {
    // data fields from Port type.
    *m_d = mPortValue->get_d();
}

void AtomIPort_fwd__timed_TimePort::syncToPortValue() const {
    // data fields from Port type.
    mPortValue->set_d(*m_d);
}

AtomIPort_fwd__timed_TimePort::~AtomIPort_fwd__timed_TimePort() {
}
