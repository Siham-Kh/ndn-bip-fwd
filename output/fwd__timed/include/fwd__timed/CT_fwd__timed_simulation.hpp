#ifndef FWD____TIMED_CT__FWD____TIMED__SIMULATION_HPP_
#define FWD____TIMED_CT__FWD____TIMED__SIMULATION_HPP_

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:232:2
// include package "master" header
#include <fwd__timed.hpp>

#include <Compound.hpp>

// User include given in @cpp annotation
#include <utilities.hpp>
#include <trace_helper.hpp>
#include <proba_helper.hpp>
#include <helper.hpp>

// for component types
#include <fwd__timed/AT_fwd__timed_forwarder.hpp>
#include <fwd__timed/AT_fwd__timed_RQueue.hpp>
#include <fwd__timed/AT_fwd__timed_producer.hpp>
#include <fwd__timed/AT_fwd__timed_TQueue.hpp>
#include <fwd__timed/AT_fwd__timed_consumer.hpp>

// for connector types
#include <fwd__timed/ConnT_fwd__timed_Time.hpp>
#include <fwd__timed/ConnT_fwd__timed_Tick__connected.hpp>
#include <fwd__timed/ConnT_fwd__timed_broad.hpp>
#include <fwd__timed/ConnT_fwd__timed_rdv.hpp>


class CT_fwd__timed_simulation : public Compound {
public:
    CT_fwd__timed_simulation (const string &name, AT_fwd__timed_consumer &_comp_decl__cons, AT_fwd__timed_producer &_comp_decl__prod, AT_fwd__timed_TQueue &_comp_decl__Txpipe, AT_fwd__timed_RQueue &_comp_decl__Rxpipe, AT_fwd__timed_forwarder &_comp_decl__fwd
                                  , ConnT_fwd__timed_broad &_conn_decl__send1, ConnT_fwd__timed_rdv &_conn_decl__get1, ConnT_fwd__timed_broad &_conn_decl__send2, ConnT_fwd__timed_rdv &_conn_decl__get2, ConnT_fwd__timed_Time &_conn_decl__time, ConnT_fwd__timed_Tick__connected &_conn_decl__TimeClose
                                  
                                  
                                  
                                  
    
    );
    virtual ~CT_fwd__timed_simulation();


private:

    // SubComponent decls
    AT_fwd__timed_consumer &_comp_decl__cons;
    AT_fwd__timed_producer &_comp_decl__prod;
    AT_fwd__timed_TQueue &_comp_decl__Txpipe;
    AT_fwd__timed_RQueue &_comp_decl__Rxpipe;
    AT_fwd__timed_forwarder &_comp_decl__fwd;

    // connector decls
    ConnT_fwd__timed_broad &_conn_decl__send1;
    ConnT_fwd__timed_rdv &_conn_decl__get1;
    ConnT_fwd__timed_broad &_conn_decl__send2;
    ConnT_fwd__timed_rdv &_conn_decl__get2;
    ConnT_fwd__timed_Time &_conn_decl__time;
    ConnT_fwd__timed_Tick__connected &_conn_decl__TimeClose;
};



#endif // FWD____TIMED_CT__FWD____TIMED__SIMULATION_HPP_
