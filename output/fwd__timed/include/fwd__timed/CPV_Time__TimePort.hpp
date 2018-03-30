#ifndef INCLUDE_FWD____TIMED_CPV__TIME____TIMEPORT_HPP_
#define INCLUDE_FWD____TIMED_CPV__TIME____TIMEPORT_HPP_

#include <fwd__timed/PV_fwd__timed_TimePort.hpp>

class CPV_Time__TimePort : public PV_fwd__timed_TimePort {
public:
    CPV_Time__TimePort();
    virtual ~CPV_Time__TimePort();

    // get/set for local data NOT exported.
    const int& cget_delta() const;
    int& cget_delta();
    void cset_delta(int _cd_delta);
private:

    // Links from local data to port data:
    // int cd_delta -> d
}; 


    // get/set for local data NOT exported.
inline
const int& CPV_Time__TimePort::cget_delta() const {
    return get_d();
}
inline
int& CPV_Time__TimePort::cget_delta() {
    return get_d();
}
inline
void CPV_Time__TimePort::cset_delta(int _cd_delta) {
    set_d(_cd_delta);
}

#endif // INCLUDE_FWD____TIMED_CPV__TIME____TIMEPORT_HPP_
