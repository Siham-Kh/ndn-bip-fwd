// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:64:2

#include <fwd__timed/AT_fwd__timed_consumer.hpp>


#include <CycleInAtomPrioritiesError.hpp>
#include <NonDeterministicPetriNetError.hpp>
#include <NonOneSafePetriNetError.hpp>


bool AT_fwd__timed_consumer::atSTART () const {
    return __statesbv[ 0/(8*sizeof(int))] & 1<< (0%(8*sizeof(int)));
}

bool AT_fwd__timed_consumer::toSTART () {
    if (atSTART()) return false;
    __statesbv[ 0/(8*sizeof(int))] |= 1<< (0%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_consumer::fromSTART () {
    if (!atSTART()) return false;
    __statesbv[ 0/(8*sizeof(int))] &= ~(1<< (0%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_consumer::atSENDI () const {
    return __statesbv[ 1/(8*sizeof(int))] & 1<< (1%(8*sizeof(int)));
}

bool AT_fwd__timed_consumer::toSENDI () {
    if (atSENDI()) return false;
    __statesbv[ 1/(8*sizeof(int))] |= 1<< (1%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_consumer::fromSENDI () {
    if (!atSENDI()) return false;
    __statesbv[ 1/(8*sizeof(int))] &= ~(1<< (1%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_consumer::attime () const {
    return __statesbv[ 2/(8*sizeof(int))] & 1<< (2%(8*sizeof(int)));
}

bool AT_fwd__timed_consumer::totime () {
    if (attime()) return false;
    __statesbv[ 2/(8*sizeof(int))] |= 1<< (2%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_consumer::fromtime () {
    if (!attime()) return false;
    __statesbv[ 2/(8*sizeof(int))] &= ~(1<< (2%(8*sizeof(int))));
    return true;
}

AT_fwd__timed_consumer::AT_fwd__timed_consumer(const string &name , AtomIPort_fwd__timed_trans &_iport_decl__SND, AtomIPort_fwd__timed_TimePort &_iport_decl__tick
                         , AtomEPort_fwd__timed_trans &_eport_decl__SND, AtomEPort_fwd__timed_TimePort &_eport_decl__tick
                         
                         , int _comp_param__Ts) :  ComponentItf(name, ATOM), Atom(name) , _iport_decl__SND(_iport_decl__SND), _iport_decl__tick(_iport_decl__tick), _eport_decl__SND(_eport_decl__SND), _eport_decl__tick(_eport_decl__tick), _comp_param__Ts(_comp_param__Ts) {
    this->addInternalPort(_iport_decl__SND);
    _iport_decl__SND.setPtr_d(&_id__i);

    // link data internal to internal port
    this->addInternalPort(_iport_decl__tick);
    _iport_decl__tick.setPtr_d(&_id__d);
    // export port
    this->addPort(_eport_decl__SND);
    this->addPort(_eport_decl__tick);
}

BipError& AT_fwd__timed_consumer::execute(PortValue &portValue) {
    BipError *ret = &BipError::NoError;
    bool something_happened = false;

    // sync data from portvalue to internal data
        if (&_iport_decl_pv__SND == &portValue) {
		assert(_iport_decl__SND.hasPortValue());
        _iport_decl__SND.syncFromPortValue();
    } else     if (&_iport_decl_pv__tick == &portValue) {
		assert(_iport_decl__tick.hasPortValue());
        _iport_decl__tick.syncFromPortValue();
    }
    // transition triggered by port
        if (_iport_decl__SND.hasPortValue() && (&_iport_decl_pv__SND == &portValue) &&
        atSTART() &&
        transid_1) {
        if (something_happened) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__SND);
            return *r;
        }


        // reset exported data

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:75:50
        printf("CONS: consumer sending %d \n", _id__i);
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:75:99
        _id__clock = 0;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:75:106
        _id__d = _comp_param__Ts;

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:75:4
        if (! fromSTART()) {
            NonOneSafePetriNetError *r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__SND);
            return *r;
        }

        if (ret != &BipError::NoError) return *ret;

        if (! toSENDI() ){
            NonOneSafePetriNetError * r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__SND);
            return *r;
        }
        if (ret != &BipError::NoError) return *ret;
        something_happened = true;
    } else     if (_iport_decl__tick.hasPortValue() && (&_iport_decl_pv__tick == &portValue) &&
        atSENDI() &&
        transid_2) {
        if (something_happened) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }


        // reset exported data

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:77:59
        _id__clock = (_id__clock)  +  (_id__d);
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:77:71
        _id__d = (_comp_param__Ts)  -  (_id__clock);
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:77:83
        trace_i("Sender.clock", _id__clock);

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:77:4
        if (! fromSENDI()) {
            NonOneSafePetriNetError *r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }

        if (ret != &BipError::NoError) return *ret;

        if (! toSENDI() ){
            NonOneSafePetriNetError * r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }
        if (ret != &BipError::NoError) return *ret;
        something_happened = true;
    } else     if (_iport_decl__tick.hasPortValue() && (&_iport_decl_pv__tick == &portValue) &&
        attime() &&
        transid_5) {
        if (something_happened) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }


        // reset exported data

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:81:49
        trace_i("Sender.extra", _id__d);

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:81:4
        if (! fromtime()) {
            NonOneSafePetriNetError *r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }

        if (ret != &BipError::NoError) return *ret;

        if (! totime() ){
            NonOneSafePetriNetError * r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }
        if (ret != &BipError::NoError) return *ret;
        something_happened = true;
    }
    assert(something_happened == true);
        // count possible internal transitions
            int __possible_internals = 0;
    if (atSENDI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:4
        && ((_id__clock)  ==  (_comp_param__Ts))) __possible_internals ++;
    if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:80:4
        && ((_id__i)  ==  (4))) __possible_internals ++;
    if (__possible_internals > 1) {ret = new NonDeterministicPetriNetError(*this); }
     else {
        // internal transitions
            bool somethingToDo = false;
        do {
            somethingToDo = false;
            if (atSENDI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:4
        && ((_id__clock)  ==  (_comp_param__Ts))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:66
        _id__clock = 0;
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:72
        _id__d = _comp_param__Ts;
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:77
        trace_i("Sender.clock", _id__clock);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:110
        _id__i = (_id__i)  +  (1);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:4
        fromSENDI();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:80:4
        && ((_id__i)  ==  (4))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:80:4
        fromSTART();
        totime();
        somethingToDo = true;
    
    }
    } while(somethingToDo);
    } // close internal execution 'else' branch
    
    if (ret->type() != NO_ERROR) return *ret;

    return updatePortValues();
}

BipError& AT_fwd__timed_consumer::initialize() {
    BipError *ret = &BipError::NoError;

    //_iport_decl__SND.setPortValue(_iport_decl_pv__SND);
    _iport_decl__SND.clearPortValue();
    //_iport_decl__tick.setPortValue(_iport_decl_pv__tick);
    _iport_decl__tick.clearPortValue();

    // initial action
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:73:26
    _id__i = 1;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:73:35
    _id__clock = 0;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:73:41
    _id__d = _comp_param__Ts;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:73:47
    trace_i("Sender.init", _id__clock);

    for (unsigned int idx = 0; idx < bvector_size; idx++){
        __statesbv[idx] = 0;
    }

    toSTART();

        // count possible internal transitions
            int __possible_internals = 0;
    if (atSENDI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:4
        && ((_id__clock)  ==  (_comp_param__Ts))) __possible_internals ++;
    if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:80:4
        && ((_id__i)  ==  (4))) __possible_internals ++;
    if (__possible_internals > 1) {ret = new NonDeterministicPetriNetError(*this); }
     else {
        // internal transitions
            bool somethingToDo = false;
        do {
            somethingToDo = false;
            if (atSENDI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:4
        && ((_id__clock)  ==  (_comp_param__Ts))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:66
        _id__clock = 0;
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:72
        _id__d = _comp_param__Ts;
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:77
        trace_i("Sender.clock", _id__clock);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:110
        _id__i = (_id__i)  +  (1);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:78:4
        fromSENDI();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:80:4
        && ((_id__i)  ==  (4))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:80:4
        fromSTART();
        totime();
        somethingToDo = true;
    
    }
    } while(somethingToDo);
    } // close internal execution 'else' branch
    
    if (ret->type() != NO_ERROR) return *ret;

    return updatePortValues();
}

BipError& AT_fwd__timed_consumer::updatePortValues() {
    BipError *ret = &BipError::NoError;

    // reset enabled status of internal ports
    this->_iport_decl__SND.setIsEnabled(false);
    this->_iport_decl__tick.setIsEnabled(false);
    
    // update enabled status of internal ports
    if (atSTART()
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:75:4
        && ((_id__i)  <  (4))) {
        // check we don't have 2 transitions on the same port possible at the same time.
        if (_iport_decl__SND.isEnabled()) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__SND);
            // it is the caller's responsibility to handle memory.
            // there need to be a 'delete' somewhere. 
            return *r;
        }
        transid_1 = true;
        _iport_decl__SND.setIsEnabled(true);
    } else {
        transid_1 = false;
    }
    if (atSENDI()
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:77:4
        && ((_id__d)  >  (0))) {
        // check we don't have 2 transitions on the same port possible at the same time.
        if (_iport_decl__tick.isEnabled()) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__tick);
            // it is the caller's responsibility to handle memory.
            // there need to be a 'delete' somewhere. 
            return *r;
        }
        transid_2 = true;
        _iport_decl__tick.setIsEnabled(true);
    } else {
        transid_2 = false;
    }
    if (attime()
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:81:4
        && ((_id__d)  >  (0))) {
        // check we don't have 2 transitions on the same port possible at the same time.
        if (_iport_decl__tick.isEnabled()) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__tick);
            // it is the caller's responsibility to handle memory.
            // there need to be a 'delete' somewhere. 
            return *r;
        }
        transid_5 = true;
        _iport_decl__tick.setIsEnabled(true);
    } else {
        transid_5 = false;
    }

    // update port values of internal ports
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

AT_fwd__timed_consumer::~AT_fwd__timed_consumer() {
}
