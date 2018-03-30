
#include <fwd__timed/Inter_fwd__timed_Time.hpp>
#include <fwd__timed/ConnT_fwd__timed_Time.hpp>

const bitset<5> Inter_fwd__timed_Time::predefined(string("11111"));

Inter_fwd__timed_Time::Inter_fwd__timed_Time(const ConnT_fwd__timed_Time &connector) : Interaction(connector) {
    involvedPorts.reset();
    port_vector_fresh = true;
    defined = false;
    refresh_defined = false;
    mPorts.reserve(5);
}

Inter_fwd__timed_Time::Inter_fwd__timed_Time(const ConnT_fwd__timed_Time &connector, bool t1, bool t2, bool t3, bool t4, bool t5) : Interaction(connector) {
    involvedPorts.reset();

    defined = true;
    refresh_defined = false;
	port_vector_fresh = false;

    involvedPorts.set(0, t1);
    involvedPorts.set(1, t2);
    involvedPorts.set(2, t3);
    involvedPorts.set(3, t4);
    involvedPorts.set(4, t5);

    defined = t1 && t2 && t3 && t4 && t5;
    mPorts.reserve(5);
}

Inter_fwd__timed_Time::Inter_fwd__timed_Time(const ConnT_fwd__timed_Time &connector, const vector<Port *> &ports) : Interaction(connector), port_vector_fresh(false) {
    commonRecycle(ports);
    mPorts.reserve(5);
}

Inter_fwd__timed_Time::~Inter_fwd__timed_Time(){
}

// This one is 'const' but its only role
// is to set mPorts correctly (ie. its only role is to modify the object)
void Inter_fwd__timed_Time::refreshPorts() const {
    const vector<QuotedPortReference *> &parent_ports = this->connector().ports();
    mPorts.clear();
    mPorts.reserve(5);

    if (involvedPorts.test(0)) {
         mPorts.push_back(&(parent_ports[0]->port()));
    }
    if (involvedPorts.test(1)) {
         mPorts.push_back(&(parent_ports[1]->port()));
    }
    if (involvedPorts.test(2)) {
         mPorts.push_back(&(parent_ports[2]->port()));
    }
    if (involvedPorts.test(3)) {
         mPorts.push_back(&(parent_ports[3]->port()));
    }
    if (involvedPorts.test(4)) {
         mPorts.push_back(&(parent_ports[4]->port()));
    }
    port_vector_fresh = true;
}

vector<Port*>& Inter_fwd__timed_Time::ports() {
    if (!port_vector_fresh){
        refreshPorts();
    }

    return mPorts;
}

const vector<Port *> & Inter_fwd__timed_Time::ports() const {
    if (!port_vector_fresh){
        refreshPorts();
    }

    return mPorts;
}

bool Inter_fwd__timed_Time::operator==(const Interaction &interaction) const {
    bool ret = false;

    // check if interaction values are from the same connector
    if (&connector() == &interaction.connector()) {
        assert(dynamic_cast<const Inter_fwd__timed_Time *>(&interaction) != NULL);
        const Inter_fwd__timed_Time *other = static_cast<const Inter_fwd__timed_Time *>(&interaction);
        ret = (involvedPorts == other->involvedPorts);
    }
    return ret;
}

bool Inter_fwd__timed_Time::operator<=(const Interaction &interaction) const {
    bool ret = false;

    // check if interaction values are from the same connector
    if (&connector() == &interaction.connector()) {
        assert(dynamic_cast<const Inter_fwd__timed_Time *>(&interaction) != NULL);
        const Inter_fwd__timed_Time *other = static_cast<const Inter_fwd__timed_Time *>(&interaction);
        ret = ((involvedPorts & other->involvedPorts) == involvedPorts);
    }

    return ret;
}

bool Inter_fwd__timed_Time::operator<(const Interaction &interaction) const {
    bool ret = false;

    // check if interaction values are from the same connector
    if (&connector() == &interaction.connector()) {
        assert(dynamic_cast<const Inter_fwd__timed_Time *>(&interaction) != NULL);
        const Inter_fwd__timed_Time *other = static_cast<const Inter_fwd__timed_Time *>(&interaction);
        ret = (((involvedPorts &  other->involvedPorts) == involvedPorts) &&
                (involvedPorts != other->involvedPorts));
    }

    return ret;
}

void Inter_fwd__timed_Time::recycle() {
    Interaction::recycle();
    mPorts.clear();
    port_vector_fresh = true;
    defined = false;
    refresh_defined = false;
    involvedPorts.reset();
}

void Inter_fwd__timed_Time::recycle(const vector<Port *> &ports) {
    Interaction::recycle();
    commonRecycle(ports);
}

void Inter_fwd__timed_Time::commonRecycle(const vector<Port *> &ports){
    involvedPorts.reset();

    for (vector<Port *>::const_iterator portIt = ports.begin() ;
         portIt != ports.end() ;
         ++portIt) {
        const vector<Port *>::size_type post_shift = findPort(*portIt);

        involvedPorts.set(post_shift);
    }

    port_vector_fresh = false;
    refresh_defined = true;
}
