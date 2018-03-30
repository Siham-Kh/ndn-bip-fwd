// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:217:0

#include <fwd__timed/ConnT_fwd__timed_Time.hpp>

#include <fwd__timed/PV_fwd__timed_TimePort.hpp>

// for exported port.
#include <fwd__timed/CPV_Time__TimePort.hpp>
#include <fwd__timed/PV_fwd__timed_TimePort.hpp>
#include <fwd__timed/PT_fwd__timed_TimePort.hpp>

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

static inline PV_fwd__timed_TimePort * get_t1(const QPR_fwd__timed_TimePort & qpr, const InterV_fwd__timed_Time &civ){
  return dynamic_cast<PV_fwd__timed_TimePort *>(getPortValue(qpr, civ));
}
static inline PV_fwd__timed_TimePort * get_t2(const QPR_fwd__timed_TimePort & qpr, const InterV_fwd__timed_Time &civ){
  return dynamic_cast<PV_fwd__timed_TimePort *>(getPortValue(qpr, civ));
}
static inline PV_fwd__timed_TimePort * get_t3(const QPR_fwd__timed_TimePort & qpr, const InterV_fwd__timed_Time &civ){
  return dynamic_cast<PV_fwd__timed_TimePort *>(getPortValue(qpr, civ));
}
static inline PV_fwd__timed_TimePort * get_t4(const QPR_fwd__timed_TimePort & qpr, const InterV_fwd__timed_Time &civ){
  return dynamic_cast<PV_fwd__timed_TimePort *>(getPortValue(qpr, civ));
}
static inline PV_fwd__timed_TimePort * get_t5(const QPR_fwd__timed_TimePort & qpr, const InterV_fwd__timed_Time &civ){
  return dynamic_cast<PV_fwd__timed_TimePort *>(getPortValue(qpr, civ));
}


ConnT_fwd__timed_Time::ConnT_fwd__timed_Time(const string &name, QPR_fwd__timed_TimePort &t1, QPR_fwd__timed_TimePort &t2, QPR_fwd__timed_TimePort &t3, QPR_fwd__timed_TimePort &t4, QPR_fwd__timed_TimePort &t5, ConnPort_fwd__timed_TimePort &time) : Connector(name), t1(t1), t2(t2), t3(t3), t4(t4), t5(t5), time(time) {
    this->addPort(t1);
    this->addPort(t2);
    this->addPort(t3);
    this->addPort(t4);
    this->addPort(t5);
    this->setExportedPort(time);

    // Interactions
    _i__t1_t2_t3_t4_t5 = new Inter_fwd__timed_Time(*this, true, true, true, true, true);
}

ConnT_fwd__timed_Time::~ConnT_fwd__timed_Time() {

    // Interactions
    delete _i__t1_t2_t3_t4_t5;
    for (vector<Interaction *>::const_iterator interactionIt = definedInteractions.begin() ;
         interactionIt != definedInteractions.end() ;
         ++interactionIt) {
        delete *interactionIt;
    }
    definedInteractions.clear();
}

PortValue &ConnT_fwd__timed_Time::up(const InteractionValue &interactionValue) const {
    assert(dynamic_cast<const InterV_fwd__timed_Time *>(&interactionValue) != NULL);
    const InterV_fwd__timed_Time *c_interaction_v __attribute__((unused)) = static_cast<const InterV_fwd__timed_Time *>(&interactionValue);
    const Inter_fwd__timed_Time *c_interaction __attribute__((unused)) = &(c_interaction_v->mInteraction);
    CPV_Time__TimePort *cpv __attribute__((unused))= &(c_interaction_v->mExportedPortValue);
    
    // first
    if(*c_interaction == *_i__t1_t2_t3_t4_t5) {
        cpv->cset_delta(MIN(get_t1(t1, *c_interaction_v)->get_d(), get_t2(t2, *c_interaction_v)->get_d(), get_t3(t3, *c_interaction_v)->get_d(), get_t4(t4, *c_interaction_v)->get_d(), get_t5(t5, *c_interaction_v)->get_d()));
    }
    return *cpv;
}

void ConnT_fwd__timed_Time::down(InteractionValue &interactionValue) const {
    // You should *never* reach this. Calling this method denotes an error in
    // scheduling (the down(interactionvalue, portvalue) should have been used)
    assert(false);
}

void ConnT_fwd__timed_Time::down(InteractionValue &interactionValue, PortValue &portValue) const {
    assert(dynamic_cast<CPV_Time__TimePort *>(&portValue) != NULL);
    CPV_Time__TimePort *cpv __attribute__((unused))= static_cast<CPV_Time__TimePort *>(&portValue);
    assert(dynamic_cast<const InterV_fwd__timed_Time *>(&interactionValue) != NULL);
    const Inter_fwd__timed_Time *c_interaction = static_cast<const Inter_fwd__timed_Time *>(&(interactionValue.interaction()));
    const InterV_fwd__timed_Time *c_interaction_v = static_cast<const InterV_fwd__timed_Time *>(&interactionValue);
    if(*c_interaction == *_i__t1_t2_t3_t4_t5) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:224:29
        get_t1(t1, *c_interaction_v)->set_d(cpv->cget_delta());
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:224:43
        get_t2(t2, *c_interaction_v)->set_d(cpv->cget_delta());
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:224:57
        get_t3(t3, *c_interaction_v)->set_d(cpv->cget_delta());
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:224:71
        get_t4(t4, *c_interaction_v)->set_d(cpv->cget_delta());
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:224:85
        get_t5(t5, *c_interaction_v)->set_d(cpv->cget_delta());
    }
}

Interaction &ConnT_fwd__timed_Time::createInteraction() const{
  return *new Inter_fwd__timed_Time(*this);
}

Interaction &ConnT_fwd__timed_Time::createInteraction(const vector<Port *> &ports) const{
    return *new Inter_fwd__timed_Time(*this, ports);
}

InteractionValue &ConnT_fwd__timed_Time::createInteractionValue(const Interaction &interaction, const vector<PortValue *> &values) const {
    return *new InterV_fwd__timed_Time(*this, interaction, values);
}

void ConnT_fwd__timed_Time::releaseInteraction(Interaction &interaction) const {
    delete &interaction;
}

void ConnT_fwd__timed_Time::releaseInteractionValue(InteractionValue &interactionValue) const {
    delete &interactionValue;
}

bool ConnT_fwd__timed_Time::guard(const InteractionValue &interactionValue) const {
    assert(dynamic_cast<const InterV_fwd__timed_Time *>(&interactionValue) != NULL);
    const InterV_fwd__timed_Time *c_interaction_v __attribute__((unused)) = static_cast<const InterV_fwd__timed_Time *>(&interactionValue);
    const Inter_fwd__timed_Time *c_interaction __attribute__((unused)) = &(c_interaction_v->mInteraction);


    // default to true. May not be the wisest choice.
    return true;
}

const vector<Interaction*>& ConnT_fwd__timed_Time::interactions() const {
  if (definedInteractions.empty()) {
    definedInteractions.push_back(new Inter_fwd__timed_Time(*this, true, true, true, true, true));
  }

  // check that the number of defined interactions is correct
  assert(definedInteractions.size() == 1);

  return definedInteractions;
}
