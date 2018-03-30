// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:232:2

#include <fwd__timed/CT_fwd__timed_simulation.hpp>

CT_fwd__timed_simulation::CT_fwd__timed_simulation (const string &name, AT_fwd__timed_consumer &_comp_decl__cons, AT_fwd__timed_producer &_comp_decl__prod, AT_fwd__timed_TQueue &_comp_decl__Txpipe, AT_fwd__timed_RQueue &_comp_decl__Rxpipe, AT_fwd__timed_forwarder &_comp_decl__fwd
                              , ConnT_fwd__timed_broad &_conn_decl__send1, ConnT_fwd__timed_rdv &_conn_decl__get1, ConnT_fwd__timed_broad &_conn_decl__send2, ConnT_fwd__timed_rdv &_conn_decl__get2, ConnT_fwd__timed_Time &_conn_decl__time, ConnT_fwd__timed_Tick__connected &_conn_decl__TimeClose
                              
                              
                              
                              

) : ComponentItf(name, COMPOUND), Compound(name), _comp_decl__cons(_comp_decl__cons), _comp_decl__prod(_comp_decl__prod), _comp_decl__Txpipe(_comp_decl__Txpipe), _comp_decl__Rxpipe(_comp_decl__Rxpipe), _comp_decl__fwd(_comp_decl__fwd), _conn_decl__send1(_conn_decl__send1), _conn_decl__get1(_conn_decl__get1), _conn_decl__send2(_conn_decl__send2), _conn_decl__get2(_conn_decl__get2), _conn_decl__time(_conn_decl__time), _conn_decl__TimeClose(_conn_decl__TimeClose) {
    this->addComponent(_comp_decl__cons);
    this->addComponent(_comp_decl__prod);
    this->addComponent(_comp_decl__Txpipe);
    this->addComponent(_comp_decl__Rxpipe);
    this->addComponent(_comp_decl__fwd);
    this->addConnector(_conn_decl__send1);
    this->addConnector(_conn_decl__get1);
    this->addConnector(_conn_decl__send2);
    this->addConnector(_conn_decl__get2);
    this->addConnector(_conn_decl__time);
    this->addConnector(_conn_decl__TimeClose);
}

CT_fwd__timed_simulation::~CT_fwd__timed_simulation() {
}
