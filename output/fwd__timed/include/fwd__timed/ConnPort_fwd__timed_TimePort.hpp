#ifndef INCLUDE_FWD____TIMED_CONNPORT__FWD____TIMED__TIMEPORT_HPP_
#define INCLUDE_FWD____TIMED_CONNPORT__FWD____TIMED__TIMEPORT_HPP_

#include <ConnectorExportPort.hpp>

#include <fwd__timed/PT_fwd__timed_TimePort.hpp>

class ConnPort_fwd__timed_TimePort : public virtual Port,
                public ConnectorExportPort,
                public PT_fwd__timed_TimePort {
public:
    ConnPort_fwd__timed_TimePort(const string &name);
    virtual ~ConnPort_fwd__timed_TimePort();
}; 

#endif // INCLUDE_FWD____TIMED_CONNPORT__FWD____TIMED__TIMEPORT_HPP_
