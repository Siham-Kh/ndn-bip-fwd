// here we should have includes for all used types
// from all packages.
#include "DeployTypes.hpp"

Component* deploy(int argc, char **argv);
bool isSerializeEnabled();
void serialize(char **buf, size_t *len);
void deserialize(const char *buf, size_t len);

namespace staticallocated{

    // data param for Comp_ROOT./
    

    AtomIPort_fwd__timed_trans iport_ROOT_cons_SND("SND");

    AtomIPort_fwd__timed_TimePort iport_ROOT_cons_tick("tick");

    AtomEPort_fwd__timed_trans port_ROOT_cons_SND("SND");

    AtomEPort_fwd__timed_TimePort port_ROOT_cons_tick("tick");

    // static init for Atom: Comp_ROOT_cons
    int data_ROOT_cons_Ts = 2;
    

    AT_fwd__timed_consumer Comp_ROOT_cons(
     "cons"
     , iport_ROOT_cons_SND, iport_ROOT_cons_tick
     , port_ROOT_cons_SND, port_ROOT_cons_tick
     
     , data_ROOT_cons_Ts
    );


    AtomIPort_fwd__timed_trans iport_ROOT_prod_RCV("RCV");

    AtomIPort_fwd__timed_TimePort iport_ROOT_prod_tick("tick");

    AtomEPort_fwd__timed_trans port_ROOT_prod_RCV("RCV");

    AtomEPort_fwd__timed_TimePort port_ROOT_prod_tick("tick");

    // static init for Atom: Comp_ROOT_prod
    

    AT_fwd__timed_producer Comp_ROOT_prod(
     "prod"
     , iport_ROOT_prod_RCV, iport_ROOT_prod_tick
     , port_ROOT_prod_RCV, port_ROOT_prod_tick
     
     
    );


    AtomIPort_fwd__timed_trans iport_ROOT_Txpipe_RCV("RCV");

    AtomIPort_fwd__timed_trans iport_ROOT_Txpipe_SND("SND");

    AtomIPort_fwd__timed_TimePort iport_ROOT_Txpipe_tick("tick");

    AtomEPort_fwd__timed_trans port_ROOT_Txpipe_RCV("RCV");

    AtomEPort_fwd__timed_trans port_ROOT_Txpipe_SND("SND");

    AtomEPort_fwd__timed_TimePort port_ROOT_Txpipe_tick("tick");

    // static init for Atom: Comp_ROOT_Txpipe
    int data_ROOT_Txpipe_qsize = 3;
    

    AT_fwd__timed_TQueue Comp_ROOT_Txpipe(
     "Txpipe"
     , iport_ROOT_Txpipe_RCV, iport_ROOT_Txpipe_SND, iport_ROOT_Txpipe_tick
     , port_ROOT_Txpipe_RCV, port_ROOT_Txpipe_SND, port_ROOT_Txpipe_tick
     
     , data_ROOT_Txpipe_qsize
    );


    AtomIPort_fwd__timed_trans iport_ROOT_Rxpipe_RCV("RCV");

    AtomIPort_fwd__timed_trans iport_ROOT_Rxpipe_SND("SND");

    AtomIPort_fwd__timed_TimePort iport_ROOT_Rxpipe_tick("tick");

    AtomEPort_fwd__timed_trans port_ROOT_Rxpipe_RCV("RCV");

    AtomEPort_fwd__timed_trans port_ROOT_Rxpipe_SND("SND");

    AtomEPort_fwd__timed_TimePort port_ROOT_Rxpipe_tick("tick");

    // static init for Atom: Comp_ROOT_Rxpipe
    int data_ROOT_Rxpipe_qsize = 3;
    

    AT_fwd__timed_RQueue Comp_ROOT_Rxpipe(
     "Rxpipe"
     , iport_ROOT_Rxpipe_RCV, iport_ROOT_Rxpipe_SND, iport_ROOT_Rxpipe_tick
     , port_ROOT_Rxpipe_RCV, port_ROOT_Rxpipe_SND, port_ROOT_Rxpipe_tick
     
     , data_ROOT_Rxpipe_qsize
    );


    AtomIPort_fwd__timed_trans iport_ROOT_fwd_RCV("RCV");

    AtomIPort_fwd__timed_trans iport_ROOT_fwd_SND("SND");

    AtomIPort_fwd__timed_TimePort iport_ROOT_fwd_tick("tick");

    AtomEPort_fwd__timed_trans port_ROOT_fwd_RCV("RCV");

    AtomEPort_fwd__timed_trans port_ROOT_fwd_SND("SND");

    AtomEPort_fwd__timed_TimePort port_ROOT_fwd_tick("tick");

    // static init for Atom: Comp_ROOT_fwd
    

    AT_fwd__timed_forwarder Comp_ROOT_fwd(
     "fwd"
     , iport_ROOT_fwd_RCV, iport_ROOT_fwd_SND, iport_ROOT_fwd_tick
     , port_ROOT_fwd_RCV, port_ROOT_fwd_SND, port_ROOT_fwd_tick
     
     
    );


    QPR_fwd__timed_trans ref_ROOT_send1_s(port_ROOT_cons_SND, false);

    QPR_fwd__timed_trans ref_ROOT_send1_r(port_ROOT_Txpipe_RCV, false);

    ConnT_fwd__timed_broad Conn_ROOT_send1(
        "send1",
        ref_ROOT_send1_s, ref_ROOT_send1_r
        
        );

    QPR_fwd__timed_trans ref_ROOT_get1_s(port_ROOT_Txpipe_SND, false);

    QPR_fwd__timed_trans ref_ROOT_get1_r(port_ROOT_fwd_RCV, false);

    ConnT_fwd__timed_rdv Conn_ROOT_get1(
        "get1",
        ref_ROOT_get1_s, ref_ROOT_get1_r
        
        );

    QPR_fwd__timed_trans ref_ROOT_send2_s(port_ROOT_fwd_SND, false);

    QPR_fwd__timed_trans ref_ROOT_send2_r(port_ROOT_Rxpipe_RCV, false);

    ConnT_fwd__timed_broad Conn_ROOT_send2(
        "send2",
        ref_ROOT_send2_s, ref_ROOT_send2_r
        
        );

    QPR_fwd__timed_trans ref_ROOT_get2_s(port_ROOT_Rxpipe_SND, false);

    QPR_fwd__timed_trans ref_ROOT_get2_r(port_ROOT_prod_RCV, false);

    ConnT_fwd__timed_rdv Conn_ROOT_get2(
        "get2",
        ref_ROOT_get2_s, ref_ROOT_get2_r
        
        );

    QPR_fwd__timed_TimePort ref_ROOT_time_t1(port_ROOT_cons_tick, false);

    QPR_fwd__timed_TimePort ref_ROOT_time_t2(port_ROOT_Txpipe_tick, false);

    QPR_fwd__timed_TimePort ref_ROOT_time_t3(port_ROOT_fwd_tick, false);

    QPR_fwd__timed_TimePort ref_ROOT_time_t4(port_ROOT_Rxpipe_tick, false);

    QPR_fwd__timed_TimePort ref_ROOT_time_t5(port_ROOT_prod_tick, false);

    ConnPort_fwd__timed_TimePort port_ROOT_time_time("time");

    ConnT_fwd__timed_Time Conn_ROOT_time(
        "time",
        ref_ROOT_time_t1, ref_ROOT_time_t2, ref_ROOT_time_t3, ref_ROOT_time_t4, ref_ROOT_time_t5
        , port_ROOT_time_time
        );

    QPR_fwd__timed_TimePort ref_ROOT_TimeClose_t(port_ROOT_time_time, false);

    ConnT_fwd__timed_Tick__connected Conn_ROOT_TimeClose(
        "TimeClose",
        ref_ROOT_TimeClose_t
        
        );

    // static init for Compound: Comp_ROOT

    CT_fwd__timed_simulation Comp_ROOT(
      "ROOT"
     , Comp_ROOT_cons, Comp_ROOT_prod, Comp_ROOT_Txpipe, Comp_ROOT_Rxpipe, Comp_ROOT_fwd
     
     , Conn_ROOT_send1, Conn_ROOT_get1, Conn_ROOT_send2, Conn_ROOT_get2, Conn_ROOT_time, Conn_ROOT_TimeClose
     
     
     
     
    );


// End of namespace.
};
