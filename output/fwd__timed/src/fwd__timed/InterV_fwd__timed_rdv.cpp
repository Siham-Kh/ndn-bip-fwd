
#include <fwd__timed/InterV_fwd__timed_rdv.hpp>
#include <fwd__timed/ConnT_fwd__timed_rdv.hpp>

InterV_fwd__timed_rdv::InterV_fwd__timed_rdv(const ConnT_fwd__timed_rdv &connector, const Interaction& interaction, const vector<PortValue *> &values) :
        InteractionValue(),
        mInteraction(connector, interaction.ports()) {
    this->mPortValues.reserve(2);
    commonRecycle(interaction, values);
}


void InterV_fwd__timed_rdv::commonRecycle(const Interaction& interaction, const vector<PortValue *> &values) {
	this->mPortValues.clear();
    for (vector<PortValue *>::const_iterator valueIt = values.begin() ;
         valueIt != values.end() ;
         ++valueIt) {
        this->mPortValues.push_back(*valueIt);
    }
}


InterV_fwd__timed_rdv::~InterV_fwd__timed_rdv(){
}


