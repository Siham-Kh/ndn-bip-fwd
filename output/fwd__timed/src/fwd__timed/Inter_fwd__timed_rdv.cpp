
#include <fwd__timed/Inter_fwd__timed_rdv.hpp>
#include <fwd__timed/ConnT_fwd__timed_rdv.hpp>

const bitset<2> Inter_fwd__timed_rdv::predefined(string("11"));

Inter_fwd__timed_rdv::Inter_fwd__timed_rdv(const ConnT_fwd__timed_rdv &connector) : Interaction(connector) {
    involvedPorts.reset();
    port_vector_fresh = true;
    defined = false;
    refresh_defined = false;
    mPorts.reserve(2);
}

Inter_fwd__timed_rdv::Inter_fwd__timed_rdv(const ConnT_fwd__timed_rdv &connector, bool s, bool r) : Interaction(connector) {
    involvedPorts.reset();

    defined = true;
    refresh_defined = false;
	port_vector_fresh = false;

    involvedPorts.set(0, s);
    involvedPorts.set(1, r);

    defined = s && r;
    mPorts.reserve(2);
}

Inter_fwd__timed_rdv::Inter_fwd__timed_rdv(const ConnT_fwd__timed_rdv &connector, const vector<Port *> &ports) : Interaction(connector), port_vector_fresh(false) {
    commonRecycle(ports);
    mPorts.reserve(2);
}

Inter_fwd__timed_rdv::~Inter_fwd__timed_rdv(){
}

// This one is 'const' but its only role
// is to set mPorts correctly (ie. its only role is to modify the object)
void Inter_fwd__timed_rdv::refreshPorts() const {
    const vector<QuotedPortReference *> &parent_ports = this->connector().ports();
    mPorts.clear();
    mPorts.reserve(2);

    if (involvedPorts.test(0)) {
         mPorts.push_back(&(parent_ports[0]->port()));
    }
    if (involvedPorts.test(1)) {
         mPorts.push_back(&(parent_ports[1]->port()));
    }
    port_vector_fresh = true;
}

vector<Port*>& Inter_fwd__timed_rdv::ports() {
    if (!port_vector_fresh){
        refreshPorts();
    }

    return mPorts;
}

const vector<Port *> & Inter_fwd__timed_rdv::ports() const {
    if (!port_vector_fresh){
        refreshPorts();
    }

    return mPorts;
}

bool Inter_fwd__timed_rdv::operator==(const Interaction &interaction) const {
    bool ret = false;

    // check if interaction values are from the same connector
    if (&connector() == &interaction.connector()) {
        assert(dynamic_cast<const Inter_fwd__timed_rdv *>(&interaction) != NULL);
        const Inter_fwd__timed_rdv *other = static_cast<const Inter_fwd__timed_rdv *>(&interaction);
        ret = (involvedPorts == other->involvedPorts);
    }
    return ret;
}

bool Inter_fwd__timed_rdv::operator<=(const Interaction &interaction) const {
    bool ret = false;

    // check if interaction values are from the same connector
    if (&connector() == &interaction.connector()) {
        assert(dynamic_cast<const Inter_fwd__timed_rdv *>(&interaction) != NULL);
        const Inter_fwd__timed_rdv *other = static_cast<const Inter_fwd__timed_rdv *>(&interaction);
        ret = ((involvedPorts & other->involvedPorts) == involvedPorts);
    }

    return ret;
}

bool Inter_fwd__timed_rdv::operator<(const Interaction &interaction) const {
    bool ret = false;

    // check if interaction values are from the same connector
    if (&connector() == &interaction.connector()) {
        assert(dynamic_cast<const Inter_fwd__timed_rdv *>(&interaction) != NULL);
        const Inter_fwd__timed_rdv *other = static_cast<const Inter_fwd__timed_rdv *>(&interaction);
        ret = (((involvedPorts &  other->involvedPorts) == involvedPorts) &&
                (involvedPorts != other->involvedPorts));
    }

    return ret;
}

void Inter_fwd__timed_rdv::recycle() {
    Interaction::recycle();
    mPorts.clear();
    port_vector_fresh = true;
    defined = false;
    refresh_defined = false;
    involvedPorts.reset();
}

void Inter_fwd__timed_rdv::recycle(const vector<Port *> &ports) {
    Interaction::recycle();
    commonRecycle(ports);
}

void Inter_fwd__timed_rdv::commonRecycle(const vector<Port *> &ports){
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
