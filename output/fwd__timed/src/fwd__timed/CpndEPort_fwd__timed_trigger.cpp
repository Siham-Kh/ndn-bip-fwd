#include <fwd__timed/CpndEPort_fwd__timed_trigger.hpp>

#include <fwd__timed/PV_fwd__timed_trigger.hpp>

CpndEPort_fwd__timed_trigger::CpndEPort_fwd__timed_trigger(const string &name) :
    PortItf(name, COMPOUND_EXPORT),
    Port(name, COMPOUND_EXPORT),
    CompoundExportPort(name),
    PT_fwd__timed_trigger(name, COMPOUND_EXPORT) {
}

CpndEPort_fwd__timed_trigger::~CpndEPort_fwd__timed_trigger() {
}
