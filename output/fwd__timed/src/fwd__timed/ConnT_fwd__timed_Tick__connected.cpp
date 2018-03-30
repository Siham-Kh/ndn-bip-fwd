// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:211:0

#include <fwd__timed/ConnT_fwd__timed_Tick__connected.hpp>

#include <fwd__timed/PV_fwd__timed_TimePort.hpp>


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

static inline PV_fwd__timed_TimePort * get_t(const QPR_fwd__timed_TimePort & qpr, const InterV_fwd__timed_Tick__connected &civ){
  return dynamic_cast<PV_fwd__timed_TimePort *>(getPortValue(qpr, civ));
}


ConnT_fwd__timed_Tick__connected::ConnT_fwd__timed_Tick__connected(const string &name, QPR_fwd__timed_TimePort &t) : Connector(name), t(t) {
    this->addPort(t);
}

ConnT_fwd__timed_Tick__connected::~ConnT_fwd__timed_Tick__connected() {
    for (vector<Interaction *>::const_iterator interactionIt = definedInteractions.begin() ;
         interactionIt != definedInteractions.end() ;
         ++interactionIt) {
        delete *interactionIt;
    }
    definedInteractions.clear();
}

PortValue &ConnT_fwd__timed_Tick__connected::up(const InteractionValue &interactionValue) const {
    // THIS SHOULD *NEVER* HAPPEN.
    assert(false);
    // to avoid warnings
    return *(new PortValue());
}

void ConnT_fwd__timed_Tick__connected::down(InteractionValue &interactionValue) const {
    
}

void ConnT_fwd__timed_Tick__connected::down(InteractionValue &interactionValue, PortValue &portValue) const {
    // You should *never* reach this. Calling this method denotes an error in
    // scheduling (the down(interactionvalue) should have been used
    assert(false);
}

Interaction &ConnT_fwd__timed_Tick__connected::createInteraction() const{
  return *new Inter_fwd__timed_Tick__connected(*this);
}

Interaction &ConnT_fwd__timed_Tick__connected::createInteraction(const vector<Port *> &ports) const{
    return *new Inter_fwd__timed_Tick__connected(*this, ports);
}

InteractionValue &ConnT_fwd__timed_Tick__connected::createInteractionValue(const Interaction &interaction, const vector<PortValue *> &values) const {
    return *new InterV_fwd__timed_Tick__connected(*this, interaction, values);
}

void ConnT_fwd__timed_Tick__connected::releaseInteraction(Interaction &interaction) const {
    delete &interaction;
}

void ConnT_fwd__timed_Tick__connected::releaseInteractionValue(InteractionValue &interactionValue) const {
    delete &interactionValue;
}

bool ConnT_fwd__timed_Tick__connected::guard(const InteractionValue &interactionValue) const {


    // default to true. May not be the wisest choice.
    return true;
}

const vector<Interaction*>& ConnT_fwd__timed_Tick__connected::interactions() const {
  if (definedInteractions.empty()) {
    definedInteractions.push_back(new Inter_fwd__timed_Tick__connected(*this, true));
  }

  // check that the number of defined interactions is correct
  assert(definedInteractions.size() == 1);

  return definedInteractions;
}
