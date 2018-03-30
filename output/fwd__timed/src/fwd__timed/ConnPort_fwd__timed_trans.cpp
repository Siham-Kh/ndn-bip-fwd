#include <fwd__timed/ConnPort_fwd__timed_trans.hpp>

ConnPort_fwd__timed_trans::ConnPort_fwd__timed_trans(const string &name) : 
    PortItf(name, CONNECTOR_EXPORT),
    Port(name, CONNECTOR_EXPORT),
    ConnectorExportPort(name),
    PT_fwd__timed_trans(name, CONNECTOR_EXPORT) {
}

ConnPort_fwd__timed_trans::~ConnPort_fwd__timed_trans() {
}
