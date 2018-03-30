
#include <fwd__timed/AtomEPort_fwd__timed_TimePort.hpp>
#include <fwd__timed/PV_fwd__timed_TimePort.hpp>

AtomEPort_fwd__timed_TimePort::AtomEPort_fwd__timed_TimePort(const string &name) :
    PortItf(name, ATOM_EXPORT),
    Port(name, ATOM_EXPORT),
    AtomExportPort(name),
    PT_fwd__timed_TimePort(name, ATOM_EXPORT),
    mIsReset(false) {
}

AtomEPort_fwd__timed_TimePort::~AtomEPort_fwd__timed_TimePort(){
}
