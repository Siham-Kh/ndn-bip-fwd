#ifndef INCLUDE_FWD____TIMED_QPR__FWD____TIMED__TIMEPORT_HPP_
#define INCLUDE_FWD____TIMED_QPR__FWD____TIMED__TIMEPORT_HPP_

#include <QuotedPortReference.hpp>

#include <fwd__timed/PT_fwd__timed_TimePort.hpp>

class QPR_fwd__timed_TimePort : public QuotedPortReference {
public:
    QPR_fwd__timed_TimePort(PT_fwd__timed_TimePort &port, const bool &trigger);
    virtual ~QPR_fwd__timed_TimePort();
}; 

#endif // INCLUDE_FWD____TIMED_QPR__FWD____TIMED__TIMEPORT_HPP_
