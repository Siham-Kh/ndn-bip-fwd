#ifndef FWD____TIMED_AT__FWD____TIMED__PRODUCER_HPP_
#define FWD____TIMED_AT__FWD____TIMED__PRODUCER_HPP_

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:37:2
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



class AT_fwd__timed_producer : public Atom {
private:
   // internal ports & associated port values
    AtomIPort_fwd__timed_trans &_iport_decl__RCV;
    PV_fwd__timed_trans _iport_decl_pv__RCV;
    AtomIPort_fwd__timed_TimePort &_iport_decl__tick;
    PV_fwd__timed_TimePort _iport_decl_pv__tick;

    // exported ports
    AtomEPort_fwd__timed_trans &_eport_decl__RCV;
    AtomEPort_fwd__timed_TimePort &_eport_decl__tick;
public:
    AT_fwd__timed_producer(const string &name , AtomIPort_fwd__timed_trans &_iport_decl__RCV, AtomIPort_fwd__timed_TimePort &_iport_decl__tick
                             , AtomEPort_fwd__timed_trans &_eport_decl__RCV, AtomEPort_fwd__timed_TimePort &_eport_decl__tick
                             
                             );
    virtual ~AT_fwd__timed_producer();

    virtual BipError& execute(PortValue &portValue);

    virtual BipError& initialize();
    BipError& updatePortValues();

protected:
    const static size_t bvector_size = 4/(8*sizeof(int))+((4%(8*sizeof(int))) > 0 ? 1 : 0);
    int __statesbv[ bvector_size ];

    int _id__i;
    int _id__clock;
    int _id__d;
    int _id__c;


    bool transid_1;
    bool transid_4;

    bool atSTART () const;
    bool toSTART ();
    bool fromSTART ();
    bool atPROC () const;
    bool toPROC ();
    bool fromPROC ();
    bool at_time () const;
    bool to_time ();
    bool from_time ();
    bool atstop () const;
    bool tostop ();
    bool fromstop ();
};


// for inlining

#endif // FWD____TIMED_AT__FWD____TIMED__PRODUCER_HPP_
