#include <fwd__timed/AtomIPort_fwd__timed_trigger.hpp>

AtomIPort_fwd__timed_trigger::AtomIPort_fwd__timed_trigger(const string &name) : AtomInternalPort(name),
    mIsEnabled(false) {
}

void AtomIPort_fwd__timed_trigger::syncFromPortValue() const {
}

void AtomIPort_fwd__timed_trigger::syncToPortValue() const {
}

AtomIPort_fwd__timed_trigger::~AtomIPort_fwd__timed_trigger() {
}
