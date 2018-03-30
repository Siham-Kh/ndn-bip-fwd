#ifndef INCLUDE_FWD____TIMED_CPNDEPORT__FWD____TIMED__TRANS_HPP_
#define INCLUDE_FWD____TIMED_CPNDEPORT__FWD____TIMED__TRANS_HPP_

#include <CompoundExportPort.hpp>

#include <fwd__timed/PT_fwd__timed_trans.hpp>

class CpndEPort_fwd__timed_trans :
    public virtual Port,
    public CompoundExportPort,
    public PT_fwd__timed_trans {
public:
    CpndEPort_fwd__timed_trans(const string &name);
    virtual ~CpndEPort_fwd__timed_trans();
}; 

#endif // INCLUDE_FWD____TIMED_CPNDEPORT__FWD____TIMED__TRANS_HPP_
