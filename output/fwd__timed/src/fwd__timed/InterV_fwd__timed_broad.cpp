
#include <fwd__timed/InterV_fwd__timed_broad.hpp>
#include <fwd__timed/ConnT_fwd__timed_broad.hpp>

InterV_fwd__timed_broad::InterV_fwd__timed_broad(const ConnT_fwd__timed_broad &connector, const Interaction& interaction, const vector<PortValue *> &values) :
        InteractionValue(),
        mInteraction(connector, interaction.ports()) {
    this->mPortValues.reserve(2);
    commonRecycle(interaction, values);
}


void InterV_fwd__timed_broad::commonRecycle(const Interaction& interaction, const vector<PortValue *> &values) {
	this->mPortValues.clear();
    for (vector<PortValue *>::const_iterator valueIt = values.begin() ;
         valueIt != values.end() ;
         ++valueIt) {
        this->mPortValues.push_back(*valueIt);
    }
}


InterV_fwd__timed_broad::~InterV_fwd__timed_broad(){
}


