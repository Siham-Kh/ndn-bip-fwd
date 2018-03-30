
#include <fwd__timed/InterV_fwd__timed_Tick__connected.hpp>
#include <fwd__timed/ConnT_fwd__timed_Tick__connected.hpp>

InterV_fwd__timed_Tick__connected::InterV_fwd__timed_Tick__connected(const ConnT_fwd__timed_Tick__connected &connector, const Interaction& interaction, const vector<PortValue *> &values) :
        InteractionValue(),
        mInteraction(connector, interaction.ports()) {
    this->mPortValues.reserve(1);
    commonRecycle(interaction, values);
}


void InterV_fwd__timed_Tick__connected::commonRecycle(const Interaction& interaction, const vector<PortValue *> &values) {
	this->mPortValues.clear();
    for (vector<PortValue *>::const_iterator valueIt = values.begin() ;
         valueIt != values.end() ;
         ++valueIt) {
        this->mPortValues.push_back(*valueIt);
    }
}


InterV_fwd__timed_Tick__connected::~InterV_fwd__timed_Tick__connected(){
}


