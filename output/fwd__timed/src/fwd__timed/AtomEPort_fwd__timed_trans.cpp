
#include <fwd__timed/AtomEPort_fwd__timed_trans.hpp>
#include <fwd__timed/PV_fwd__timed_trans.hpp>

AtomEPort_fwd__timed_trans::AtomEPort_fwd__timed_trans(const string &name) :
    PortItf(name, ATOM_EXPORT),
    Port(name, ATOM_EXPORT),
    AtomExportPort(name),
    PT_fwd__timed_trans(name, ATOM_EXPORT),
    mIsReset(false) {
}

AtomEPort_fwd__timed_trans::~AtomEPort_fwd__timed_trans(){
}
