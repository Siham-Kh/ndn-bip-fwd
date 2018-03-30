#ifndef FWD____TIMED_CONNT__FWD____TIMED__TICK____CONNECTED_HPP_
#define FWD____TIMED_CONNT__FWD____TIMED__TICK____CONNECTED_HPP_

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:211:0
// include package "master" header
#include <fwd__timed.hpp>

#include <Connector.hpp>
#include <Interaction.hpp>
#include <PortValue.hpp>

// User include given in @cpp annotation
#include <utilities.hpp>
#include <trace_helper.hpp>
#include <proba_helper.hpp>
#include <helper.hpp>

#include <fwd__timed/QPR_fwd__timed_TimePort.hpp>
#include <fwd__timed/InterV_fwd__timed_Tick__connected.hpp>

class ConnT_fwd__timed_Tick__connected : public Connector {
public:
    ConnT_fwd__timed_Tick__connected(const string &name, QPR_fwd__timed_TimePort &t);
    virtual ~ConnT_fwd__timed_Tick__connected();

    virtual PortValue &up(const InteractionValue &interactionValue) const;
    virtual void down(InteractionValue &interactionValue) const;
    virtual void down(InteractionValue &interactionValue, PortValue &portValue) const;

    virtual Interaction &createInteraction() const;
    virtual Interaction &createInteraction(const vector<Port *> &ports) const;
    virtual void releaseInteraction(Interaction &interaction) const;

    virtual InteractionValue &createInteractionValue(const Interaction &interactionValue, const vector<PortValue *> &values) const;
    virtual void releaseInteractionValue(InteractionValue &interactionValue) const;

    virtual bool guard(const InteractionValue &interactionValue) const;
    virtual const vector<Interaction *> &interactions() const;
    virtual bool canUpOnlyMaximalInteractions() const {
        return false;
    }

private:
    QPR_fwd__timed_TimePort &t;




    mutable vector<Interaction *> definedInteractions;
};
#endif // FWD____TIMED_CONNT__FWD____TIMED__TICK____CONNECTED_HPP_
