#ifndef FWD____TIMED_PT__FWD____TIMED__TRIGGER_HPP_
#define FWD____TIMED_PT__FWD____TIMED__TRIGGER_HPP_

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:28:2
// include package "master" header
#include <fwd__timed.hpp>

#include <Port.hpp>

// User include given in @cpp annotation
#include <utilities.hpp>
#include <trace_helper.hpp>
#include <proba_helper.hpp>
#include <helper.hpp>

class PT_fwd__timed_trigger : public virtual Port{

public:
    PT_fwd__timed_trigger(const string &name, const ExportType& type);
    ~PT_fwd__timed_trigger();
};
#endif // FWD____TIMED_PT__FWD____TIMED__TRIGGER_HPP_
