// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:119:2

#include <fwd__timed/AT_fwd__timed_TQueue.hpp>


#include <CycleInAtomPrioritiesError.hpp>
#include <NonDeterministicPetriNetError.hpp>
#include <NonOneSafePetriNetError.hpp>


bool AT_fwd__timed_TQueue::atSTART () const {
    return __statesbv[ 0/(8*sizeof(int))] & 1<< (0%(8*sizeof(int)));
}

bool AT_fwd__timed_TQueue::toSTART () {
    if (atSTART()) return false;
    __statesbv[ 0/(8*sizeof(int))] |= 1<< (0%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_TQueue::fromSTART () {
    if (!atSTART()) return false;
    __statesbv[ 0/(8*sizeof(int))] &= ~(1<< (0%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_TQueue::atRCVI () const {
    return __statesbv[ 1/(8*sizeof(int))] & 1<< (1%(8*sizeof(int)));
}

bool AT_fwd__timed_TQueue::toRCVI () {
    if (atRCVI()) return false;
    __statesbv[ 1/(8*sizeof(int))] |= 1<< (1%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_TQueue::fromRCVI () {
    if (!atRCVI()) return false;
    __statesbv[ 1/(8*sizeof(int))] &= ~(1<< (1%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_TQueue::atADDQ () const {
    return __statesbv[ 2/(8*sizeof(int))] & 1<< (2%(8*sizeof(int)));
}

bool AT_fwd__timed_TQueue::toADDQ () {
    if (atADDQ()) return false;
    __statesbv[ 2/(8*sizeof(int))] |= 1<< (2%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_TQueue::fromADDQ () {
    if (!atADDQ()) return false;
    __statesbv[ 2/(8*sizeof(int))] &= ~(1<< (2%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_TQueue::atDISCARD () const {
    return __statesbv[ 3/(8*sizeof(int))] & 1<< (3%(8*sizeof(int)));
}

bool AT_fwd__timed_TQueue::toDISCARD () {
    if (atDISCARD()) return false;
    __statesbv[ 3/(8*sizeof(int))] |= 1<< (3%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_TQueue::fromDISCARD () {
    if (!atDISCARD()) return false;
    __statesbv[ 3/(8*sizeof(int))] &= ~(1<< (3%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_TQueue::atSTAT () const {
    return __statesbv[ 4/(8*sizeof(int))] & 1<< (4%(8*sizeof(int)));
}

bool AT_fwd__timed_TQueue::toSTAT () {
    if (atSTAT()) return false;
    __statesbv[ 4/(8*sizeof(int))] |= 1<< (4%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_TQueue::fromSTAT () {
    if (!atSTAT()) return false;
    __statesbv[ 4/(8*sizeof(int))] &= ~(1<< (4%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_TQueue::atGET () const {
    return __statesbv[ 5/(8*sizeof(int))] & 1<< (5%(8*sizeof(int)));
}

bool AT_fwd__timed_TQueue::toGET () {
    if (atGET()) return false;
    __statesbv[ 5/(8*sizeof(int))] |= 1<< (5%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_TQueue::fromGET () {
    if (!atGET()) return false;
    __statesbv[ 5/(8*sizeof(int))] &= ~(1<< (5%(8*sizeof(int))));
    return true;
}

bool AT_fwd__timed_TQueue::at_time () const {
    return __statesbv[ 6/(8*sizeof(int))] & 1<< (6%(8*sizeof(int)));
}

bool AT_fwd__timed_TQueue::to_time () {
    if (at_time()) return false;
    __statesbv[ 6/(8*sizeof(int))] |= 1<< (6%(8*sizeof(int)));
    return true;
}

bool AT_fwd__timed_TQueue::from_time () {
    if (!at_time()) return false;
    __statesbv[ 6/(8*sizeof(int))] &= ~(1<< (6%(8*sizeof(int))));
    return true;
}

AT_fwd__timed_TQueue::AT_fwd__timed_TQueue(const string &name , AtomIPort_fwd__timed_trans &_iport_decl__RCV, AtomIPort_fwd__timed_trans &_iport_decl__SND, AtomIPort_fwd__timed_TimePort &_iport_decl__tick
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

BipError& AT_fwd__timed_TQueue::execute(PortValue &portValue) {
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

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:131:40
        _id__size = len(_id__q);

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:131:4
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


// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:144:4
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

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:147:60
        _id__clock = (_id__clock)  +  (_id__d);
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:147:75
        _id__d = INFINIT();

// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:147:4
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
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:133:4
        && ((_id__size)  ==  (_comp_param__qsize))) __possible_internals ++;
    if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:4
        && ((_id__size)  <  (_comp_param__qsize))) __possible_internals ++;
    if (atDISCARD()
    
        ) __possible_internals ++;
    if (atADDQ()
    
        ) __possible_internals ++;
    if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:4
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
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:133:4
        && ((_id__size)  ==  (_comp_param__qsize))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:133:70
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:133:4
        fromRCVI();
        toDISCARD();
        somethingToDo = true;
    
    }
     else if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:4
        && ((_id__size)  <  (_comp_param__qsize))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:59
        add(_id__q, _id__ir);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:71
        printf("Queue received %d \n", _id__ir);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:115
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:4
        fromRCVI();
        toADDQ();
        somethingToDo = true;
    
    }
     else if (atDISCARD()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:136:4
        fromDISCARD();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atADDQ()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:137:4
        fromADDQ();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:4
        && (((_id__status)  ==  (true))  &&  ((_id__is)  ==  (0)))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:75
        _id__is = getq(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:86
        popq(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:102
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:4
        fromSTART();
        toGET();
        somethingToDo = true;
    
    }
     else if (atGET()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:141:42
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:141:4
        fromGET();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atSTAT()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:145:39
        _id__is = 0;
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:145:4
        fromSTAT();
        toSTART();
        somethingToDo = true;
    
    }
    } while(somethingToDo);
    } // close internal execution 'else' branch
    
    if (ret->type() != NO_ERROR) return *ret;

    return updatePortValues();
}

BipError& AT_fwd__timed_TQueue::initialize() {
    BipError *ret = &BipError::NoError;

    //_iport_decl__RCV.setPortValue(_iport_decl_pv__RCV);
    _iport_decl__RCV.clearPortValue();
    //_iport_decl__SND.setPortValue(_iport_decl_pv__SND);
    _iport_decl__SND.clearPortValue();
    //_iport_decl__tick.setPortValue(_iport_decl_pv__tick);
    _iport_decl__tick.clearPortValue();

    // initial action
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:130:34
    _id__ir = 0;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:130:40
    _id__is = 0;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:130:52
    _id__counter = 0;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:130:63
    _id__status = false;
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:130:74
    _id__d = INFINIT();
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:130:93
    _id__clock = 0;

    for (unsigned int idx = 0; idx < bvector_size; idx++){
        __statesbv[idx] = 0;
    }

    toSTART();
    to_time();

        // count possible internal transitions
            int __possible_internals = 0;
    if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:133:4
        && ((_id__size)  ==  (_comp_param__qsize))) __possible_internals ++;
    if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:4
        && ((_id__size)  <  (_comp_param__qsize))) __possible_internals ++;
    if (atDISCARD()
    
        ) __possible_internals ++;
    if (atADDQ()
    
        ) __possible_internals ++;
    if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:4
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
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:133:4
        && ((_id__size)  ==  (_comp_param__qsize))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:133:70
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:133:4
        fromRCVI();
        toDISCARD();
        somethingToDo = true;
    
    }
     else if (atRCVI()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:4
        && ((_id__size)  <  (_comp_param__qsize))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:59
        add(_id__q, _id__ir);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:71
        printf("Queue received %d \n", _id__ir);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:115
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:134:4
        fromRCVI();
        toADDQ();
        somethingToDo = true;
    
    }
     else if (atDISCARD()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:136:4
        fromDISCARD();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atADDQ()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:137:4
        fromADDQ();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atSTART()
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:4
        && (((_id__status)  ==  (true))  &&  ((_id__is)  ==  (0)))) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:75
        _id__is = getq(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:86
        popq(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:102
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:140:4
        fromSTART();
        toGET();
        somethingToDo = true;
    
    }
     else if (atGET()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:141:42
        _id__status = Q_Check(_id__q);
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:141:4
        fromGET();
        toSTART();
        somethingToDo = true;
    
    }
     else if (atSTAT()
    
        ) {
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:145:39
        _id__is = 0;
    // /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:145:4
        fromSTAT();
        toSTART();
        somethingToDo = true;
    
    }
    } while(somethingToDo);
    } // close internal execution 'else' branch
    
    if (ret->type() != NO_ERROR) return *ret;

    return updatePortValues();
}

BipError& AT_fwd__timed_TQueue::updatePortValues() {
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
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:144:4
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
// /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:147:4
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

AT_fwd__timed_TQueue::~AT_fwd__timed_TQueue() {
}
