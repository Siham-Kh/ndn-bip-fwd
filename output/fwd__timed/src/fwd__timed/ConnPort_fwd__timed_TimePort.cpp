#include <fwd__timed/ConnPort_fwd__timed_TimePort.hpp>

ConnPort_fwd__timed_TimePort::ConnPort_fwd__timed_TimePort(const string &name) : 
    PortItf(name, CONNECTOR_EXPORT),
    Port(name, CONNECTOR_EXPORT),
    ConnectorExportPort(name),
    PT_fwd__timed_TimePort(name, CONNECTOR_EXPORT) {
}

ConnPort_fwd__timed_TimePort::~ConnPort_fwd__timed_TimePort() {
}
