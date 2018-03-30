#ifndef INCLUDE_FWD____TIMED_PV__FWD____TIMED__TRANS_HPP_
#define INCLUDE_FWD____TIMED_PV__FWD____TIMED__TRANS_HPP_

#include <PortValue.hpp>

#include <fwd__timed/PT_fwd__timed_trans.hpp>

class PV_fwd__timed_trans : public PortValue {
public:
    PV_fwd__timed_trans(int _m_d);
    PV_fwd__timed_trans();
    virtual ~PV_fwd__timed_trans();



    // get/set for data.
    const int& get_d() const;
    int& get_d();
    void set_d(const int &_m_d);

private:
    // data fields from Port type.
    int m_d;
}; 



    // get/set for data.
inline
const int& PV_fwd__timed_trans::get_d() const {
    return m_d;
}
inline
int& PV_fwd__timed_trans::get_d() {
    return m_d;
}
inline
void PV_fwd__timed_trans::set_d(const int &_m_d) {
    m_d = _m_d;
}


#endif // INCLUDE_FWD____TIMED_PV__FWD____TIMED__TRANS_HPP_
