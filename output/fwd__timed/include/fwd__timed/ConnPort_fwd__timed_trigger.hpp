#ifndef INCLUDE_FWD____TIMED_CONNPORT__FWD____TIMED__TRIGGER_HPP_
#define INCLUDE_FWD____TIMED_CONNPORT__FWD____TIMED__TRIGGER_HPP_

#include <ConnectorExportPort.hpp>

#include <fwd__timed/PT_fwd__timed_trigger.hpp>

class ConnPort_fwd__timed_trigger : public virtual Port,
                public ConnectorExportPort,
                public PT_fwd__timed_trigger {
public:
    ConnPort_fwd__timed_trigger(const string &name);
    virtual ~ConnPort_fwd__timed_trigger();
}; 

#endif // INCLUDE_FWD____TIMED_CONNPORT__FWD____TIMED__TRIGGER_HPP_
