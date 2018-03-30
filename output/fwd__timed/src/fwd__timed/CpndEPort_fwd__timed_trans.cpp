#include <fwd__timed/CpndEPort_fwd__timed_trans.hpp>

#include <fwd__timed/PV_fwd__timed_trans.hpp>

CpndEPort_fwd__timed_trans::CpndEPort_fwd__timed_trans(const string &name) :
    PortItf(name, COMPOUND_EXPORT),
    Port(name, COMPOUND_EXPORT),
    CompoundExportPort(name),
    PT_fwd__timed_trans(name, COMPOUND_EXPORT) {
}

CpndEPort_fwd__timed_trans::~CpndEPort_fwd__timed_trans() {
}
