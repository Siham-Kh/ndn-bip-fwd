#ifndef FWD____TIMED_AT__FWD____TIMED__TQUEUE_HPP_
#define FWD____TIMED_AT__FWD____TIMED__TQUEUE_HPP_

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:119:2
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



class AT_fwd__timed_TQueue : public Atom {
private:
   // internal ports & associated port values
    AtomIPort_fwd__timed_trans &_iport_decl__RCV;
    PV_fwd__timed_trans _iport_decl_pv__RCV;
    AtomIPort_fwd__timed_trans &_iport_decl__SND;
    PV_fwd__timed_trans _iport_decl_pv__SND;
    AtomIPort_fwd__timed_TimePort &_iport_decl__tick;
    PV_fwd__timed_TimePort _iport_decl_pv__tick;

    // exported ports
    AtomEPort_fwd__timed_trans &_eport_decl__RCV;
    AtomEPort_fwd__timed_trans &_eport_decl__SND;
    AtomEPort_fwd__timed_TimePort &_eport_decl__tick;
public:
    AT_fwd__timed_TQueue(const string &name , AtomIPort_fwd__timed_trans &_iport_decl__RCV, AtomIPort_fwd__timed_trans &_iport_decl__SND, AtomIPort_fwd__timed_TimePort &_iport_decl__tick
                             , AtomEPort_fwd__timed_trans &_eport_decl__RCV, AtomEPort_fwd__timed_trans &_eport_decl__SND, AtomEPort_fwd__timed_TimePort &_eport_decl__tick
                             
                             , int _comp_param__qsize);
    virtual ~AT_fwd__timed_TQueue();

    virtual BipError& execute(PortValue &portValue);

    virtual BipError& initialize();
    BipError& updatePortValues();

protected:
    const static size_t bvector_size = 7/(8*sizeof(int))+((7%(8*sizeof(int))) > 0 ? 1 : 0);
    int __statesbv[ bvector_size ];

    int _id__ir;
    int _id__is;
    int _id__counter;
    int _id__size;
    int _id__clock;
    int _id__d;
    bool _id__status;
    QU _id__q;


    // component data parameters, read-only
    const int _comp_param__qsize;

    bool transid_1;
    bool transid_8;
    bool transid_10;

    bool atSTART () const;
    bool toSTART ();
    bool fromSTART ();
    bool atRCVI () const;
    bool toRCVI ();
    bool fromRCVI ();
    bool atADDQ () const;
    bool toADDQ ();
    bool fromADDQ ();
    bool atDISCARD () const;
    bool toDISCARD ();
    bool fromDISCARD ();
    bool atSTAT () const;
    bool toSTAT ();
    bool fromSTAT ();
    bool atGET () const;
    bool toGET ();
    bool fromGET ();
    bool at_time () const;
    bool to_time ();
    bool from_time ();
};


// for inlining

#endif // FWD____TIMED_AT__FWD____TIMED__TQUEUE_HPP_
