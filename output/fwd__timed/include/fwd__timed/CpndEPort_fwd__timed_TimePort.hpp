#ifndef INCLUDE_FWD____TIMED_CPNDEPORT__FWD____TIMED__TIMEPORT_HPP_
#define INCLUDE_FWD____TIMED_CPNDEPORT__FWD____TIMED__TIMEPORT_HPP_

#include <CompoundExportPort.hpp>

#include <fwd__timed/PT_fwd__timed_TimePort.hpp>

class CpndEPort_fwd__timed_TimePort :
    public virtual Port,
    public CompoundExportPort,
    public PT_fwd__timed_TimePort {
public:
    CpndEPort_fwd__timed_TimePort(const string &name);
    virtual ~CpndEPort_fwd__timed_TimePort();
}; 

#endif // INCLUDE_FWD____TIMED_CPNDEPORT__FWD____TIMED__TIMEPORT_HPP_
