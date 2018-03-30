#ifndef INCLUDE_FWD____TIMED_QPR__FWD____TIMED__TRIGGER_HPP_
#define INCLUDE_FWD____TIMED_QPR__FWD____TIMED__TRIGGER_HPP_

#include <QuotedPortReference.hpp>

#include <fwd__timed/PT_fwd__timed_trigger.hpp>

class QPR_fwd__timed_trigger : public QuotedPortReference {
public:
    QPR_fwd__timed_trigger(PT_fwd__timed_trigger &port, const bool &trigger);
    virtual ~QPR_fwd__timed_trigger();
}; 

#endif // INCLUDE_FWD____TIMED_QPR__FWD____TIMED__TRIGGER_HPP_
