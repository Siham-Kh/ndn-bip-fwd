#include "Deploy.hpp"

/*
 * The "static" includes (the one we use inconditionnaly)
 */

Component* deploy(int argc __attribute__((unused)), char **argv __attribute__((unused))){
    // Top is Comp_ROOT



    staticallocated::port_ROOT_cons_SND.addInternalPort(staticallocated::iport_ROOT_cons_SND);

    staticallocated::port_ROOT_cons_tick.addInternalPort(staticallocated::iport_ROOT_cons_tick);

    // Runtime init for Atom: Comp_ROOT_cons
    // staticallocated::Comp_ROOT_cons




    staticallocated::port_ROOT_prod_RCV.addInternalPort(staticallocated::iport_ROOT_prod_RCV);

    staticallocated::port_ROOT_prod_tick.addInternalPort(staticallocated::iport_ROOT_prod_tick);

    // Runtime init for Atom: Comp_ROOT_prod
    // staticallocated::Comp_ROOT_prod





    staticallocated::port_ROOT_Txpipe_RCV.addInternalPort(staticallocated::iport_ROOT_Txpipe_RCV);

    staticallocated::port_ROOT_Txpipe_SND.addInternalPort(staticallocated::iport_ROOT_Txpipe_SND);

    staticallocated::port_ROOT_Txpipe_tick.addInternalPort(staticallocated::iport_ROOT_Txpipe_tick);

    // Runtime init for Atom: Comp_ROOT_Txpipe
    // staticallocated::Comp_ROOT_Txpipe





    staticallocated::port_ROOT_Rxpipe_RCV.addInternalPort(staticallocated::iport_ROOT_Rxpipe_RCV);

    staticallocated::port_ROOT_Rxpipe_SND.addInternalPort(staticallocated::iport_ROOT_Rxpipe_SND);

    staticallocated::port_ROOT_Rxpipe_tick.addInternalPort(staticallocated::iport_ROOT_Rxpipe_tick);

    // Runtime init for Atom: Comp_ROOT_Rxpipe
    // staticallocated::Comp_ROOT_Rxpipe





    staticallocated::port_ROOT_fwd_RCV.addInternalPort(staticallocated::iport_ROOT_fwd_RCV);

    staticallocated::port_ROOT_fwd_SND.addInternalPort(staticallocated::iport_ROOT_fwd_SND);

    staticallocated::port_ROOT_fwd_tick.addInternalPort(staticallocated::iport_ROOT_fwd_tick);

    // Runtime init for Atom: Comp_ROOT_fwd
    // staticallocated::Comp_ROOT_fwd























    // Runtime init for Compound: Comp_ROOT
    // staticallocated::Comp_ROOT

    // Finished: Comp_ROOT
    return &(staticallocated::Comp_ROOT);
}

bool isSerializeEnabled() {
    return false;
}

void serialize(char **cbuf __attribute__((unused)), size_t *clen __attribute__((unused))){
    assert(false);
}

void deserialize(const char *buf __attribute__((unused)), size_t len __attribute__((unused))){
    assert(false);
}
