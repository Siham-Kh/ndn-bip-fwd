// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:158:2

#include <fwd__timed/AT_fwd__timed_RQueue.hpp>


#include <CycleInAtomPrioritiesError.hpp>
#include <NonDeterministicPetriNetError.hpp>
#include <NonOneSafePetriNetError.hpp>


bool AT_fwd__timed_RQueue::atSTART () const {
    return __statesbv[ 0/(8*sizeof(int))] & 1<< (0%(8*sizeof(int)));
}

bool AT_fwd__timed_RQueue::toSTART () {
    if (atSTART()) return false;
    __statesbv[ 0/(8*sizeof(int))] |= 1<< (0%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_RQueue::fromSTART () {
    if (!atSTART()) return false;
    __statesbv[ 0/(8*sizeof(int))] &= ~(1<< (0%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_RQueue::atRCVI () const {
    return __statesbv[ 1/(8*sizeof(int))] & 1<< (1%(8*sizeof(int)));
}

bool AT_fwd__timed_RQueue::toRCVI () {
    if (atRCVI()) return false;
    __statesbv[ 1/(8*sizeof(int))] |= 1<< (1%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_RQueue::fromRCVI () {
    if (!atRCVI()) return false;
    __statesbv[ 1/(8*sizeof(int))] &= ~(1<< (1%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_RQueue::atADDQ () const {
    return __statesbv[ 2/(8*sizeof(int))] & 1<< (2%(8*sizeof(int)));
}

bool AT_fwd__timed_RQueue::toADDQ () {
    if (atADDQ()) return false;
    __statesbv[ 2/(8*sizeof(int))] |= 1<< (2%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_RQueue::fromADDQ () {
    if (!atADDQ()) return false;
    __statesbv[ 2/(8*sizeof(int))] &= ~(1<< (2%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_RQueue::atDISCARD () const {
    return __statesbv[ 3/(8*sizeof(int))] & 1<< (3%(8*sizeof(int)));
}

bool AT_fwd__timed_RQueue::toDISCARD () {
    if (atDISCARD()) return false;
    __statesbv[ 3/(8*sizeof(int))] |= 1<< (3%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_RQueue::fromDISCARD () {
    if (!atDISCARD()) return false;
    __statesbv[ 3/(8*sizeof(int))] &= ~(1<< (3%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_RQueue::atSTAT () const {
    return __statesbv[ 4/(8*sizeof(int))] & 1<< (4%(8*sizeof(int)));
}

bool AT_fwd__timed_RQueue::toSTAT () {
    if (atSTAT()) return false;
    __statesbv[ 4/(8*sizeof(int))] |= 1<< (4%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_RQueue::fromSTAT () {
    if (!atSTAT()) return false;
    __statesbv[ 4/(8*sizeof(int))] &= ~(1<< (4%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_RQueue::atGET () const {
    return __statesbv[ 5/(8*sizeof(int))] & 1<< (5%(8*sizeof(int)));
}

bool AT_fwd__timed_RQueue::toGET () {
    if (atGET()) return false;
    __statesbv[ 5/(8*sizeof(int))] |= 1<< (5%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_RQueue::fromGET () {
    if (!atGET()) return false;
    __statesbv[ 5/(8*sizeof(int))] &= ~(1<< (5%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_RQueue::at_time () const {
    return __statesbv[ 6/(8*sizeof(int))] & 1<< (6%(8*sizeof(int)));
}

bool AT_fwd__timed_RQueue::to_time () {
    if (at_time()) return false;
    __statesbv[ 6/(8*sizeof(int))] |= 1<< (6%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_RQueue::from_time () {
    if (!at_time()) return false;
    __statesbv[ 6/(8*sizeof(int))] &= ~(1<< (6%(8*sizeof(int))));
    return true;
}

AT_fwd__timed_RQueue::AT_fwd__timed_RQueue(const string &name , AtomIPort_fwd__timed_trans &_iport_decl__RCV, AtomIPort_fwd__timed_trans &_iport_decl__SND, AtomIPort_fwd__timed_TimePort &_iport_decl__tick
                         , AtomEPort_fwd__timed_trans &_eport_decl__RCV, AtomEPort_fwd__timed_trans &_eport_decl__SND, AtomEPort_fwd__timed_TimePort &_eport_decl__tick
                         
                         , int _comp_param__qsize) :  ComponentItf(name, ATOM), Atom(name) , _iport_decl__RCV(_iport_decl__RCV), _iport_decl__SND(_iport_decl__SND), _iport_decl__tick(_iport_decl__tick), _eport_decl__RCV(_eport_decl__RCV), _eport_decl__SND(_eport_decl__SND), _eport_decl__tick(_eport_decl__tick), _comp_param__qsize(_comp_param__qsize) {
    this->addInternalPort(_iport_decl__RCV);
    _iport_decl__RCV.setPtr_d(&_id__ir);

    // link data internal to internal port
    this->addInternalPort(_iport_decl__SND);
    _iport_decl__SND.setPtr_d(&_id__is);

    // link data internal to internal port
    this->addInternalPort(_iport_decl__tick);
    _iport_decl__tick.setPtr_d(&_id__d);
    // export port
    this->addPort(_eport_decl__RCV);
    this->addPort(_eport_decl__SND);
    this->addPort(_eport_decl__tick);
}

BipError& AT_fwd__timed_RQueue::execute(PortValue &portValue) {
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
        if (_iport_decl__RCV.hasPortValue() && (&_iport_decl_pv__RCV == &portValue) &&
        atSTART() &&
        transid_1) {
        if (something_happened) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__RCV);
            return *r;
        }


        // reset exported data

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:170:40
        _id__size = len(_id__q);

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:170:4
        if (! fromSTART()) {
            NonOneSafePetriNetError *r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__RCV);
            return *r;
        }

        if (ret != &BipError::NoError) return *ret;

        if (! toRCVI() ){
            NonOneSafePetriNetError * r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__RCV);
            return *r;
        }
        if (ret != &BipError::NoError) return *ret;
        something_happened = true;
    } else     if (_iport_decl__SND.hasPortValue() && (&_iport_decl_pv__SND == &portValue) &&
        atSTART() &&
        transid_8) {
        if (something_happened) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__SND);
            return *r;
        }


        // reset exported data


// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:182:4
        if (! fromSTART()) {
            NonOneSafePetriNetError *r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__SND);
            return *r;
        }

        if (ret != &BipError::NoError) return *ret;

        if (! toSTAT() ){
            NonOneSafePetriNetError * r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__SND);
            return *r;
        }
        if (ret != &BipError::NoError) return *ret;
        something_happened = true;
    } else     if (_iport_decl__tick.hasPortValue() && (&_iport_decl_pv__tick == &portValue) &&
        at_time() &&
        transid_10) {
        if (something_happened) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }


        // reset exported data

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:185:60
        _id__clock = (_id__clock)  +  (_id__d);
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:185:75
        _id__d = INFINIT();

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:185:4
        if (! from_time()) {
            NonOneSafePetriNetError *r = new NonOneSafePetriNetError(*this);
            r->setPort(_iport_decl__tick);
            return *r;
        }

        if (ret != &BipError::NoError) return *ret;

        if (! to_time() ){
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
    if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:171:4
        && ((_id__size)  ==  (_comp_param__qsize))) __possible_internals ++;
    if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:4
        && ((_id__size)  <  (_comp_param__qsize))) __possible_internals ++;
    if (atDISCARD()
    
        ) __possible_internals ++;
    if (atADDQ()
    
        ) __possible_internals ++;
    if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:4
        && (((_id__status)  ==  (true))  &&  ((_id__is)  ==  (0)))) __possible_internals ++;
    if (atGET()
    
        ) __possible_internals ++;
    if (atSTAT()
    
        ) __possible_internals ++;
    if (__possible_internals > 1) {ret = new NonDeterministicPetriNetError(*this); }
     else {
        // internal transitions
            bool somethingToDo = false;
        do {
            somethingToDo = false;
            if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:171:4
        && ((_id__size)  ==  (_comp_param__qsize))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:171:70
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:171:4
        fromRCVI();
        toDISCARD();
        somethingToDo = true;
    
    }
     else if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:4
        && ((_id__size)  <  (_comp_param__qsize))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:59
        add(_id__q, _id__ir);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:71
        printf("Queue received %d \n", _id__ir);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:115
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:4
        fromRCVI();
        toADDQ();
        somethingToDo = true;
    
    }
     else if (atDISCARD()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:174:4
        fromDISCARD();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atADDQ()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:175:4
        fromADDQ();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:4
        && (((_id__status)  ==  (true))  &&  ((_id__is)  ==  (0)))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:75
        _id__is = getq(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:86
        popq(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:102
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:4
        fromSTART();
        toGET();
        somethingToDo = true;
    
    }
     else if (atGET()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:179:42
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:179:4
        fromGET();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atSTAT()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:183:39
        _id__is = 0;
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:183:4
        fromSTAT();
        toSTART();
        somethingToDo = true;
    
    }
    } while(somethingToDo);
    } // close internal execution 'else' branch
    
    if (ret->type() != NO_ERROR) return *ret;

    return updatePortValues();
}

BipError& AT_fwd__timed_RQueue::initialize() {
    BipError *ret = &BipError::NoError;

    //_iport_decl__RCV.setPortValue(_iport_decl_pv__RCV);
    _iport_decl__RCV.clearPortValue();
    //_iport_decl__SND.setPortValue(_iport_decl_pv__SND);
    _iport_decl__SND.clearPortValue();
    //_iport_decl__tick.setPortValue(_iport_decl_pv__tick);
    _iport_decl__tick.clearPortValue();

    // initial action
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:169:34
    _id__ir = 0;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:169:40
    _id__is = 0;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:169:52
    _id__counter = 0;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:169:63
    _id__status = false;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:169:74
    _id__d = INFINIT();
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:169:92
    _id__clock = 0;

    for (unsigned int idx = 0; idx < bvector_size; idx++){
        __statesbv[idx] = 0;
    }

    toSTART();
    to_time();

        // count possible internal transitions
            int __possible_internals = 0;
    if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:171:4
        && ((_id__size)  ==  (_comp_param__qsize))) __possible_internals ++;
    if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:4
        && ((_id__size)  <  (_comp_param__qsize))) __possible_internals ++;
    if (atDISCARD()
    
        ) __possible_internals ++;
    if (atADDQ()
    
        ) __possible_internals ++;
    if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:4
        && (((_id__status)  ==  (true))  &&  ((_id__is)  ==  (0)))) __possible_internals ++;
    if (atGET()
    
        ) __possible_internals ++;
    if (atSTAT()
    
        ) __possible_internals ++;
    if (__possible_internals > 1) {ret = new NonDeterministicPetriNetError(*this); }
     else {
        // internal transitions
            bool somethingToDo = false;
        do {
            somethingToDo = false;
            if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:171:4
        && ((_id__size)  ==  (_comp_param__qsize))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:171:70
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:171:4
        fromRCVI();
        toDISCARD();
        somethingToDo = true;
    
    }
     else if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:4
        && ((_id__size)  <  (_comp_param__qsize))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:59
        add(_id__q, _id__ir);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:71
        printf("Queue received %d \n", _id__ir);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:115
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:172:4
        fromRCVI();
        toADDQ();
        somethingToDo = true;
    
    }
     else if (atDISCARD()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:174:4
        fromDISCARD();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atADDQ()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:175:4
        fromADDQ();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:4
        && (((_id__status)  ==  (true))  &&  ((_id__is)  ==  (0)))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:75
        _id__is = getq(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:86
        popq(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:102
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:178:4
        fromSTART();
        toGET();
        somethingToDo = true;
    
    }
     else if (atGET()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:179:42
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:179:4
        fromGET();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atSTAT()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:183:39
        _id__is = 0;
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:183:4
        fromSTAT();
        toSTART();
        somethingToDo = true;
    
    }
    } while(somethingToDo);
    } // close internal execution 'else' branch
    
    if (ret->type() != NO_ERROR) return *ret;

    return updatePortValues();
}

BipError& AT_fwd__timed_RQueue::updatePortValues() {
    BipError *ret = &BipError::NoError;

    // reset enabled status of internal ports
    this->_iport_decl__RCV.setIsEnabled(false);
    this->_iport_decl__SND.setIsEnabled(false);
    this->_iport_decl__tick.setIsEnabled(false);
    
    // update enabled status of internal ports
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
        transid_1 = true;
        _iport_decl__RCV.setIsEnabled(true);
    } else {
        transid_1 = false;
    }
    if (atSTART()
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:182:4
        && ((_id__is)  !=  (0))) {
        // check we don't have 2 transitions on the same port possible at the same time.
        if (_iport_decl__SND.isEnabled()) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__SND);
            // it is the caller's responsibility to handle memory.
            // there need to be a 'delete' somewhere. 
            return *r;
        }
        transid_8 = true;
        _iport_decl__SND.setIsEnabled(true);
    } else {
        transid_8 = false;
    }
    if (at_time()
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:185:4
        && ((_id__d)  >  (0))) {
        // check we don't have 2 transitions on the same port possible at the same time.
        if (_iport_decl__tick.isEnabled()) {
            NonDeterministicPetriNetError *r = new NonDeterministicPetriNetError(*this);
            r->setPort(_iport_decl__tick);
            // it is the caller's responsibility to handle memory.
            // there need to be a 'delete' somewhere. 
            return *r;
        }
        transid_10 = true;
        _iport_decl__tick.setIsEnabled(true);
    } else {
        transid_10 = false;
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

AT_fwd__timed_RQueue::~AT_fwd__timed_RQueue() {
}
