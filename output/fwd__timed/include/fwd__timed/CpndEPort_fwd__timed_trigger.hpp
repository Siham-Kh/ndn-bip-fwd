#ifndef INCLUDE_FWD____TIMED_CPNDEPORT__FWD____TIMED__TRIGGER_HPP_
#define INCLUDE_FWD____TIMED_CPNDEPORT__FWD____TIMED__TRIGGER_HPP_

#include <CompoundExportPort.hpp>

#include <fwd__timed/PT_fwd__timed_trigger.hpp>

class CpndEPort_fwd__timed_trigger :
    public virtual Port,
    public CompoundExportPort,
    public PT_fwd__timed_trigger {
public:
    CpndEPort_fwd__timed_trigger(const string &name);
    virtual ~CpndEPort_fwd__timed_trigger();
}; 

#endif // INCLUDE_FWD____TIMED_CPNDEPORT__FWD____TIMED__TRIGGER_HPP_
