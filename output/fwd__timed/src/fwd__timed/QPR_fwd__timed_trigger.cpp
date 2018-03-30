#include <fwd__timed/QPR_fwd__timed_trigger.hpp>

QPR_fwd__timed_trigger::QPR_fwd__timed_trigger(PT_fwd__timed_trigger &port, const bool &trigger) : QuotedPortReference(port, trigger) {
}

QPR_fwd__timed_trigger::~QPR_fwd__timed_trigger(){
}
