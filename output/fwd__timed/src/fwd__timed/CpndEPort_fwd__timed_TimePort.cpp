#include <fwd__timed/CpndEPort_fwd__timed_TimePort.hpp>

#include <fwd__timed/PV_fwd__timed_TimePort.hpp>

CpndEPort_fwd__timed_TimePort::CpndEPort_fwd__timed_TimePort(const string &name) :
    PortItf(name, COMPOUND_EXPORT),
    Port(name, COMPOUND_EXPORT),
    CompoundExportPort(name),
    PT_fwd__timed_TimePort(name, COMPOUND_EXPORT) {
}

CpndEPort_fwd__timed_TimePort::~CpndEPort_fwd__timed_TimePort() {
}
