#ifndef FWD____TIMED_AT__FWD____TIMED__CONSUMER_HPP_
#define FWD____TIMED_AT__FWD____TIMED__CONSUMER_HPP_

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:64:2
// include package "master" header
#include <fwd__timed.hpp>

#include <Atom.hpp>

// User include given in @cpp annotation
#include <utilities.hpp>
#include <trace_helper.hpp>
#include <proba_helper.hpp>
#include <helper.hpp>

#include <fwd__timed/AtomIPort_fwd__timed_trans.hpp>
#include <fwd__timed/AtomIPort_fwd__timed_TimePort.hpp>

#include <fwd__timed/AtomEPort_fwd__timed_TimePort.hpp>
#include <fwd__timed/AtomEPort_fwd__timed_trans.hpp>

#include <fwd__timed/PV_fwd__timed_TimePort.hpp>
#include <fwd__timed/PV_fwd__timed_trans.hpp>



class AT_fwd__timed_consumer : public Atom {
private:
   // internal ports & associated port values
    AtomIPort_fwd__timed_trans &_iport_decl__SND;
    PV_fwd__timed_trans _iport_decl_pv__SND;
    AtomIPort_fwd__timed_TimePort &_iport_decl__tick;
    PV_fwd__timed_TimePort _iport_decl_pv__tick;

    // exported ports
    AtomEPort_fwd__timed_trans &_eport_decl__SND;
    AtomEPort_fwd__timed_TimePort &_eport_decl__tick;
public:
    AT_fwd__timed_consumer(const string &name , AtomIPort_fwd__timed_trans &_iport_decl__SND, AtomIPort_fwd__timed_TimePort &_iport_decl__tick
                             , AtomEPort_fwd__timed_trans &_eport_decl__SND, AtomEPort_fwd__timed_TimePort &_eport_decl__tick
                             
                             , int _comp_param__Ts);
    virtual ~AT_fwd__timed_consumer();

    virtual BipError& execute(PortValue &portValue);

    virtual BipError& initialize();
    BipError& updatePortValues();

protected:
    const static size_t bvector_size = 3/(8*sizeof(int))+((3%(8*sizeof(int))) > 0 ? 1 : 0);
    int __statesbv[ bvector_size ];

    int _id__i;
    int _id__clock;
    int _id__d;


    // component data parameters, read-only
    const int _comp_param__Ts;

    bool transid_1;
    bool transid_2;
    bool transid_5;

    bool atSTART () const;
    bool toSTART ();
    bool fromSTART ();
    bool atSENDI () const;
    bool toSENDI ();
    bool fromSENDI ();
    bool attime () const;
    bool totime ();
    bool fromtime ();
};


// for inlining

#endif // FWD____TIMED_AT__FWD____TIMED__CONSUMER_HPP_
