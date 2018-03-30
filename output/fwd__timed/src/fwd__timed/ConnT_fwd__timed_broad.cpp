// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:204:2

#include <fwd__timed/ConnT_fwd__timed_broad.hpp>

#include <fwd__timed/PV_fwd__timed_trans.hpp>


static inline PortValue * getPortValue(const QuotedPortReference & qpr, const InteractionValue &civ){
    Port &p = qpr.port();
    vector<Port *>::size_type idx = 0;
    for (vector<Port *>::const_iterator i = civ.ports().begin();
         i != civ.ports().end();
         i++, idx++){
        if (&p == *i) break;
    }
    assert (idx < civ.ports().size()); // means we couldn't find corresponding port value 
    return civ.portValues()[idx];
}

static inline PV_fwd__timed_trans * get_s(const QPR_fwd__timed_trans & qpr, const InterV_fwd__timed_broad &civ){
  return dynamic_cast<PV_fwd__timed_trans *>(getPortValue(qpr, civ));
}
static inline PV_fwd__timed_trans * get_r(const QPR_fwd__timed_trans & qpr, const InterV_fwd__timed_broad &civ){
  return dynamic_cast<PV_fwd__timed_trans *>(getPortValue(qpr, civ));
}


ConnT_fwd__timed_broad::ConnT_fwd__timed_broad(const string &name, QPR_fwd__timed_trans &s, QPR_fwd__timed_trans &r) : Connector(name), s(s), r(r) {
    this->addPort(s);
    this->addPort(r);

    // Interactions
    _i__s_r = new Inter_fwd__timed_broad(*this, true, true);
}

ConnT_fwd__timed_broad::~ConnT_fwd__timed_broad() {

    // Interactions
    delete _i__s_r;
    for (vector<Interaction *>::const_iterator interactionIt = definedInteractions.begin() ;
         interactionIt != definedInteractions.end() ;
         ++interactionIt) {
        delete *interactionIt;
    }
    definedInteractions.clear();
}

PortValue &ConnT_fwd__timed_broad::up(const InteractionValue &interactionValue) const {
    // THIS SHOULD *NEVER* HAPPEN.
    assert(false);
    // to avoid warnings
    return *(new PortValue());
}

void ConnT_fwd__timed_broad::down(InteractionValue &interactionValue) const {
    assert(dynamic_cast<const InterV_fwd__timed_broad *>(&interactionValue) != NULL);
    const Inter_fwd__timed_broad *c_interaction = static_cast<const Inter_fwd__timed_broad *>(&(interactionValue.interaction()));
    const InterV_fwd__timed_broad *c_interaction_v = static_cast<const InterV_fwd__timed_broad *>(&interactionValue);
    if(*c_interaction == *_i__s_r) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:206:22
        get_r(r, *c_interaction_v)->set_d(get_s(s, *c_interaction_v)->get_d());
    }
}

void ConnT_fwd__timed_broad::down(InteractionValue &interactionValue, PortValue &portValue) const {
    // You should *never* reach this. Calling this method denotes an error in
    // scheduling (the down(interactionvalue) should have been used
    assert(false);
}

Interaction &ConnT_fwd__timed_broad::createInteraction() const{
  return *new Inter_fwd__timed_broad(*this);
}

Interaction &ConnT_fwd__timed_broad::createInteraction(const vector<Port *> &ports) const{
    return *new Inter_fwd__timed_broad(*this, ports);
}

InteractionValue &ConnT_fwd__timed_broad::createInteractionValue(const Interaction &interaction, const vector<PortValue *> &values) const {
    return *new InterV_fwd__timed_broad(*this, interaction, values);
}

void ConnT_fwd__timed_broad::releaseInteraction(Interaction &interaction) const {
    delete &interaction;
}

void ConnT_fwd__timed_broad::releaseInteractionValue(InteractionValue &interactionValue) const {
    delete &interactionValue;
}

bool ConnT_fwd__timed_broad::guard(const InteractionValue &interactionValue) const {
    assert(dynamic_cast<const InterV_fwd__timed_broad *>(&interactionValue) != NULL);
    const InterV_fwd__timed_broad *c_interaction_v __attribute__((unused)) = static_cast<const InterV_fwd__timed_broad *>(&interactionValue);
    const Inter_fwd__timed_broad *c_interaction __attribute__((unused)) = &(c_interaction_v->mInteraction);


    // default to true. May not be the wisest choice.
    return true;
}

const vector<Interaction*>& ConnT_fwd__timed_broad::interactions() const {
  if (definedInteractions.empty()) {
    int __tree_1 = 1;
    // tree #1: (s'r)
    for (int __trigger_1 = 0 ; __trigger_1 <= ((__tree_1 == 0) ? 0 : 0) ; ++__trigger_1) {
    for (int __tree_2 = ((__tree_1 == 0 || __trigger_1 > 0) ? 0 : 1) ; __tree_2 >= ((__trigger_1 == 0) ? __tree_1 : 0) ; --__tree_2) {
    for (int __tree_3 = __tree_1 ; __tree_3 >= 0 ; --__tree_3) {
    int __port_s = __tree_2;
    int __port_r = __tree_3;
    definedInteractions.push_back(new Inter_fwd__timed_broad(*this, __port_s == 1, __port_r == 1));
    }
    }
    }
  }

  // check that the number of defined interactions is correct
  assert(definedInteractions.size() == 2);

  return definedInteractions;
}
