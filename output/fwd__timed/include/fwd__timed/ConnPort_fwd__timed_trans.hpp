#ifndef INCLUDE_FWD____TIMED_CONNPORT__FWD____TIMED__TRANS_HPP_
#define INCLUDE_FWD____TIMED_CONNPORT__FWD____TIMED__TRANS_HPP_

#include <ConnectorExportPort.hpp>

#include <fwd__timed/PT_fwd__timed_trans.hpp>

class ConnPort_fwd__timed_trans : public virtual Port,
                public ConnectorExportPort,
                public PT_fwd__timed_trans {
public:
    ConnPort_fwd__timed_trans(const string &name);
    virtual ~ConnPort_fwd__timed_trans();
}; 

#endif // INCLUDE_FWD____TIMED_CONNPORT__FWD____TIMED__TRANS_HPP_
