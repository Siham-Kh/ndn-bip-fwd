
#include <fwd__timed/InterV_fwd__timed_Time.hpp>
#include <fwd__timed/ConnT_fwd__timed_Time.hpp>

InterV_fwd__timed_Time::InterV_fwd__timed_Time(const ConnT_fwd__timed_Time &connector, const Interaction& interaction, const vector<PortValue *> &values) :
        InteractionValue(),
        mInteraction(connector, interaction.ports()) {
    this->mPortValues.reserve(5);
    commonRecycle(interaction, values);
}


void InterV_fwd__timed_Time::commonRecycle(const Interaction& interaction, const vector<PortValue *> &values) {
	this->mPortValues.clear();
    for (vector<PortValue *>::const_iterator valueIt = values.begin() ;
         valueIt != values.end() ;
         ++valueIt) {
        this->mPortValues.push_back(*valueIt);
    }
}


InterV_fwd__timed_Time::~InterV_fwd__timed_Time(){
}


