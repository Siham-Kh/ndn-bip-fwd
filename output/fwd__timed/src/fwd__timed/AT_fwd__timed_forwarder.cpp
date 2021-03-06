// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:90:2

#include <fwd__timed/AT_fwd__timed_forwarder.hpp>


#include <CycleInAtomPrioritiesError.hpp>
#include <NonDeterministicPetriNetError.hpp>
#include <NonOneSafePetriNetError.hpp>


bool AT_fwd__timed_forwarder::atSTART () const {
    return __statesbv[ 0/(8*sizeof(int))] & 1<< (0%(8*sizeof(int)));
}

bool AT_fwd__timed_forwarder::toSTART () {
    if (atSTART()) return false;
    __statesbv[ 0/(8*sizeof(int))] |= 1<< (0%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_forwarder::fromSTART () {
    if (!atSTART()) return false;
    __statesbv[ 0/(8*sizeof(int))] &= ~(1<< (0%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_forwarder::atPROC () const {
    return __statesbv[ 1/(8*sizeof(int))] & 1<< (1%(8*sizeof(int)));
}

bool AT_fwd__timed_forwarder::toPROC () {
    if (atPROC()) return false;
    __statesbv[ 1/(8*sizeof(int))] |= 1<< (1%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_forwarder::fromPROC () {
    if (!atPROC()) return false;
    __statesbv[ 1/(8*sizeof(int))] &= ~(1<< (1%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_forwarder::atFWD () const {
    return __statesbv[ 2/(8*sizeof(int))] & 1<< (2%(8*sizeof(int)));
}

bool AT_fwd__timed_forwarder::toFWD () {
    if (atFWD()) return false;
    __statesbv[ 2/(8*sizeof(int))] |= 1<< (2%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_forwarder::fromFWD () {
    if (!atFWD()) return false;
    __statesbv[ 2/(8*sizeof(int))] &= ~(1<< (2%(8*sizeof(int))));
    return true;
}

AT_fwd__timed_forwarder::AT_fwd__timed_forwarder(const string &name , AtomIPort_fwd__timed_trans &_iport_decl__RCV, AtomIPort_fwd__timed_trans &_iport_decl__SND, AtomIPort_fwd__timed_TimePort &_iport_decl__tick
                         , AtomEPort_fwd__timed_trans &_eport_decl__RCV, AtomEPort_fwd__timed_trans &_eport_decl__SND, AtomEPort_fwd__timed_TimePort &_eport_decl__tick
                         
                         ) :  ComponentItf(name, ATOM), Atom(name) , _iport_decl__RCV(_iport_decl__RCV), _iport_decl__SND(_iport_decl__SND), _iport_decl__tick(_iport_decl__tick), _eport_decl__RCV(_eport_decl__RCV), _eport_decl__SND(_eport_decl__SND), _eport_decl__tick(_eport_decl__tick) {
    this->addInternalPort(_iport_decl__RCV);
    _iport_decl__RCV.setPtr_d(&_id__ir);

    // link data internal to internal port
    this->addInternalPort(_iport_decl__SND);
    _iport_decl__SND.setPtr_d(&_id__ir);

    // link data internal to internal port
    this->addInternalPort(_iport_decl__tick);
    _iport_decl__tick.setPtr_d(&_id__d);
    // export port
    this->addPort(_eport_decl__RCV);
    this->addPort(_eport_decl__SND);
    this->addPort(_eport_decl__tick);
}

BipError& AT_fwd__timed_forwarder::execute(PortValue &portValue) {
    BipError *ret = &BipError::NoError;
    bool something_happened = false;

    // sync data from portvalue to internal data
        if (&_iport_decl_pv__RCV == &portValue) {
		assert(_iport_decl__RCV.hasPortValue());
        _iport_decl__RCV.syncFromPortValue();
    } else     if (&_iport_decl_pv__SND == &portValue) {
		assert(_iport_decl__SND.hasPortValue());
        _iport_decl__SND.syncFromPortValue();
    } else     if (&_iport_decl_pv__tick == &portValue) {
		assert(_iport_decl__tick.hasPortValue());
        _iport_decl__tick.syncFromPortValue();
    }
    // transition triggered by port
        if (_iport_decl__tick.hasPortValue() && (&_iport_decl_pv__tick == &portValue) &&
        atSTART() &&
        transid_1) {
        if (something_happened) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }


        // reset exported data

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:105:52
        _id__d = INFINIT();

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:105:4
        if (! fromSTART()) {
            NonOneSafePetriNetError *r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }

        if (ret != &BipError::NoError) return *ret;

        if (! toSTART() ){
            NonOneSafePetriNetError * r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }
        if (ret != &BipError::NoError) return *ret;
        something_happened = true;
    } else     if (_iport_decl__RCV.hasPortValue() && (&_iport_decl_pv__RCV == &portValue) &&
        atSTART() &&
        transid_2) {
        if (something_happened) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__RCV);
            return *r;
        }


        // reset exported data

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:106:36
        _id__D = select(_id__distrib, _id__size);
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:106:60
        _id__d = _id__D;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:106:64
        printf("fwd: Picked D=%d and his d=%d \n", _id__D, _id__d);

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:106:4
        if (! fromSTART()) {
            NonOneSafePetriNetError *r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__RCV);
            return *r;
        }

        if (ret != &BipError::NoError) return *ret;

        if (! toPROC() ){
            NonOneSafePetriNetError * r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__RCV);
            return *r;
        }
        if (ret != &BipError::NoError) return *ret;
        something_happened = true;
    } else     if (_iport_decl__tick.hasPortValue() && (&_iport_decl_pv__tick == &portValue) &&
        atPROC() &&
        transid_3) {
        if (something_happened) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }


        // reset exported data

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:107:54
        _id__clock = (_id__clock)  +  (_id__d);
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:107:66
        _id__d = (_id__D)  -  (_id__clock);
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:107:77
        trace_i("fwd.clock", _id__clock);

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:107:4
        if (! fromPROC()) {
            NonOneSafePetriNetError *r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }

        if (ret != &BipError::NoError) return *ret;

        if (! toPROC() ){
            NonOneSafePetriNetError * r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }
        if (ret != &BipError::NoError) return *ret;
        something_happened = true;
    } else     if (_iport_decl__SND.hasPortValue() && (&_iport_decl_pv__SND == &portValue) &&
        atFWD() &&
        transid_5) {
        if (something_happened) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__SND);
            return *r;
        }


        // reset exported data


// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:109:4
        if (! fromFWD()) {
            NonOneSafePetriNetError *r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__SND);
            return *r;
        }

        if (ret != &BipError::NoError) return *ret;

        if (! toSTART() ){
            NonOneSafePetriNetError * r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__SND);
            return *r;
        }
        if (ret != &BipError::NoError) return *ret;
        something_happened = true;
    }
    assert(something_happened == true);
        // count possible internal transitions
            int __possible_internals = 0;
    if (atPROC()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:4
        && ((_id__clock)  ==  (_id__D))) __possible_internals ++;
    if (__possible_internals > 1) {ret = new NonDeterministicPetriNetError(*this); }
     else {
        // internal transitions
            bool somethingToDo = false;
        do {
            somethingToDo = false;
            if (atPROC()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:4
        && ((_id__clock)  ==  (_id__D))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:62
        _id__clock = 0;
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:67
        _id__d = INFINIT();
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:79
        printf("FWD: Processed packet %d \n", _id__ir);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:4
        fromPROC();
        toFWD();
        somethingToDo = true;
    
    }
    } while(somethingToDo);
    } // close internal execution 'else' branch
    
    if (ret->type() != NO_ERROR) return *ret;

    return updatePortValues();
}

BipError& AT_fwd__timed_forwarder::initialize() {
    BipError *ret = &BipError::NoError;

    //_iport_decl__RCV.setPortValue(_iport_decl_pv__RCV);
    _iport_decl__RCV.clearPortValue();
    //_iport_decl__SND.setPortValue(_iport_decl_pv__SND);
    _iport_decl__SND.clearPortValue();
    //_iport_decl__tick.setPortValue(_iport_decl_pv__tick);
    _iport_decl__tick.clearPortValue();

    // initial action
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:101:27
    _id__ir = 0;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:101:36
    _id__clock = 0;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:101:41
    _id__d = INFINIT();
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:102:22
    trace_i("fwd.clock.init", _id__clock);
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:103:16
    _id__distrib = init_distribution("/home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/dist.txt", _id__size);

    for (unsigned int idx = 0; idx < bvector_size; idx++){
        __statesbv[idx] = 0;
    }

    toSTART();

        // count possible internal transitions
            int __possible_internals = 0;
    if (atPROC()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:4
        && ((_id__clock)  ==  (_id__D))) __possible_internals ++;
    if (__possible_internals > 1) {ret = new NonDeterministicPetriNetError(*this); }
     else {
        // internal transitions
            bool somethingToDo = false;
        do {
            somethingToDo = false;
            if (atPROC()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:4
        && ((_id__clock)  ==  (_id__D))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:62
        _id__clock = 0;
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:67
        _id__d = INFINIT();
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:79
        printf("FWD: Processed packet %d \n", _id__ir);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:108:4
        fromPROC();
        toFWD();
        somethingToDo = true;
    
    }
    } while(somethingToDo);
    } // close internal execution 'else' branch
    
    if (ret->type() != NO_ERROR) return *ret;

    return updatePortValues();
}

BipError& AT_fwd__timed_forwarder::updatePortValues() {
    BipError *ret = &BipError::NoError;

    // reset enabled status of internal ports
    this->_iport_decl__RCV.setIsEnabled(false);
    this->_iport_decl__SND.setIsEnabled(false);
    this->_iport_decl__tick.setIsEnabled(false);
    
    // update enabled status of internal ports
    if (atSTART()
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:105:4
        && ((_id__d)  >  (0))) {
        // check we don't have 2 transitions on the same port possible at the same time.
        if (_iport_decl__tick.isEnabled()) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__tick);
            // it is the caller's responsibility to handle memory.
            // there need to be a 'delete' somewhere. 
            return *r;
        }
        transid_1 = true;
        _iport_decl__tick.setIsEnabled(true);
    } else {
        transid_1 = false;
    }
    if (atSTART()

        ) {
        // check we don't have 2 transitions on the same port possible at the same time.
        if (_iport_decl__RCV.isEnabled()) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__RCV);
            // it is the caller's responsibility to handle memory.
            // there need to be a 'delete' somewhere. 
            return *r;
        }
        transid_2 = true;
        _iport_decl__RCV.setIsEnabled(true);
    } else {
        transid_2 = false;
    }
    if (atPROC()
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:107:4
        && ((_id__d)  >  (0))) {
        // check we don't have 2 transitions on the same port possible at the same time.
        if (_iport_decl__tick.isEnabled()) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__tick);
            // it is the caller's responsibility to handle memory.
            // there need to be a 'delete' somewhere. 
            return *r;
        }
        transid_3 = true;
        _iport_decl__tick.setIsEnabled(true);
    } else {
        transid_3 = false;
    }
    if (atFWD()

        ) {
        // check we don't have 2 transitions on the same port possible at the same time.
        if (_iport_decl__SND.isEnabled()) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__SND);
            // it is the caller's responsibility to handle memory.
            // there need to be a 'delete' somewhere. 
            return *r;
        }
        transid_5 = true;
        _iport_decl__SND.setIsEnabled(true);
    } else {
        transid_5 = false;
    }

    // update port values of internal ports
    if (this->_iport_decl__RCV.isEnabled()) {
        _iport_decl__RCV.setPortValue(_iport_decl_pv__RCV);
        _iport_decl__RCV.syncToPortValue();
    }
    else {
        this->_iport_decl__RCV.clearPortValue();
    }
    if (this->_iport_decl__SND.isEnabled()) {
        _iport_decl__SND.setPortValue(_iport_decl_pv__SND);
        _iport_decl__SND.syncToPortValue();
    }
    else {
        this->_iport_decl__SND.clearPortValue();
    }
    if (this->_iport_decl__tick.isEnabled()) {
        _iport_decl__tick.setPortValue(_iport_decl_pv__tick);
        _iport_decl__tick.syncToPortValue();
    }
    else {
        this->_iport_decl__tick.clearPortValue();
    }
    

    

    // update port values and reset status of exported ports
    _eport_decl__RCV.setIsReset(true);
    this->_eport_decl__RCV.portValues().clear();
    if (this->_iport_decl__RCV.hasPortValue()) {
        this->_eport_decl__RCV.addPortValue(_iport_decl_pv__RCV);
    }
    _eport_decl__SND.setIsReset(true);
    this->_eport_decl__SND.portValues().clear();
    if (this->_iport_decl__SND.hasPortValue()) {
        this->_eport_decl__SND.addPortValue(_iport_decl_pv__SND);
    }
    _eport_decl__tick.setIsReset(true);
    this->_eport_decl__tick.portValues().clear();
    if (this->_iport_decl__tick.hasPortValue()) {
        this->_eport_decl__tick.addPortValue(_iport_decl_pv__tick);
    }

    return *ret;
}

AT_fwd__timed_forwarder::~AT_fwd__timed_forwarder() {
}
