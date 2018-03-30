#ifndef INCLUDE_FWD____TIMED_QPR__FWD____TIMED__TRANS_HPP_
#define INCLUDE_FWD____TIMED_QPR__FWD____TIMED__TRANS_HPP_

#include <QuotedPortReference.hpp>

#include <fwd__timed/PT_fwd__timed_trans.hpp>

class QPR_fwd__timed_trans : public QuotedPortReference {
public:
    QPR_fwd__timed_trans(PT_fwd__timed_trans &port, const bool &trigger);
    virtual ~QPR_fwd__timed_trans();
}; 

#endif // INCLUDE_FWD____TIMED_QPR__FWD____TIMED__TRANS_HPP_
