
#include <fwd__timed/AtomEPort_fwd__timed_trigger.hpp>
#include <fwd__timed/PV_fwd__timed_trigger.hpp>

AtomEPort_fwd__timed_trigger::AtomEPort_fwd__timed_trigger(const string &name) :
    PortItf(name, ATOM_EXPORT),
    Port(name, ATOM_EXPORT),
    AtomExportPort(name),
    PT_fwd__timed_trigger(name, ATOM_EXPORT),
    mIsReset(false) {
}

AtomEPort_fwd__timed_trigger::~AtomEPort_fwd__timed_trigger(){
}
