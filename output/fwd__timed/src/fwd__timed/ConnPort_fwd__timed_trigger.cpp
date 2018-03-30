#include <fwd__timed/ConnPort_fwd__timed_trigger.hpp>

ConnPort_fwd__timed_trigger::ConnPort_fwd__timed_trigger(const string &name) : 
    PortItf(name, CONNECTOR_EXPORT),
    Port(name, CONNECTOR_EXPORT),
    ConnectorExportPort(name),
    PT_fwd__timed_trigger(name, CONNECTOR_EXPORT) {
}

ConnPort_fwd__timed_trigger::~ConnPort_fwd__timed_trigger() {
}
