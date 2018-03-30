#start
cmake_minimum_required(VERSION 2.8)

##set(ATOM_FILES)
##set(COMPOUND_FILES)
set(PORT_FILES)
set(TYPE_FILES)
##set(CONNECTOR_FILES)

set(EXTRA_SRC)
set(EXTRA_OBJ)

# user include dir
include_directories(/home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/ext-cpp)

# for @cpp(src="...") extra files
list(APPEND EXTRA_SRC /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/./ext-cpp/utilities.cpp)
list(APPEND EXTRA_SRC /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/./ext-cpp/helper.cpp)
list(APPEND EXTRA_SRC /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/./ext-cpp/trace_helper.cpp)
list(APPEND EXTRA_SRC /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/./ext-cpp/proba_helper.cpp)



# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:37:2
list(APPEND TYPE_FILES include/fwd__timed/AT_fwd__timed_producer.hpp src/fwd__timed/AT_fwd__timed_producer.cpp)


# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:64:2
list(APPEND TYPE_FILES include/fwd__timed/AT_fwd__timed_consumer.hpp src/fwd__timed/AT_fwd__timed_consumer.cpp)


# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:90:2
list(APPEND TYPE_FILES include/fwd__timed/AT_fwd__timed_forwarder.hpp src/fwd__timed/AT_fwd__timed_forwarder.cpp)


# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:119:2
list(APPEND TYPE_FILES include/fwd__timed/AT_fwd__timed_TQueue.hpp src/fwd__timed/AT_fwd__timed_TQueue.cpp)


# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:158:2
list(APPEND TYPE_FILES include/fwd__timed/AT_fwd__timed_RQueue.hpp src/fwd__timed/AT_fwd__timed_RQueue.cpp)


# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:232:2
list(APPEND TYPE_FILES include/fwd__timed/CT_fwd__timed_simulation.hpp src/fwd__timed/CT_fwd__timed_simulation.cpp)


# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:194:2
list(APPEND TYPE_FILES include/fwd__timed/ConnT_fwd__timed_rdv.hpp src/fwd__timed/ConnT_fwd__timed_rdv.cpp)


list (APPEND PORT_FILES src/fwd__timed/Inter_fwd__timed_rdv.cpp 
                        include/fwd__timed/Inter_fwd__timed_rdv.hpp)

list (APPEND PORT_FILES src/fwd__timed/InterV_fwd__timed_rdv.cpp 
                        include/fwd__timed/InterV_fwd__timed_rdv.hpp)

# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:204:2
list(APPEND TYPE_FILES include/fwd__timed/ConnT_fwd__timed_broad.hpp src/fwd__timed/ConnT_fwd__timed_broad.cpp)


list (APPEND PORT_FILES src/fwd__timed/Inter_fwd__timed_broad.cpp 
                        include/fwd__timed/Inter_fwd__timed_broad.hpp)

list (APPEND PORT_FILES src/fwd__timed/InterV_fwd__timed_broad.cpp 
                        include/fwd__timed/InterV_fwd__timed_broad.hpp)

# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:211:0
list(APPEND TYPE_FILES include/fwd__timed/ConnT_fwd__timed_Tick__connected.hpp src/fwd__timed/ConnT_fwd__timed_Tick__connected.cpp)


list (APPEND PORT_FILES src/fwd__timed/Inter_fwd__timed_Tick__connected.cpp 
                        include/fwd__timed/Inter_fwd__timed_Tick__connected.hpp)

list (APPEND PORT_FILES src/fwd__timed/InterV_fwd__timed_Tick__connected.cpp 
                        include/fwd__timed/InterV_fwd__timed_Tick__connected.hpp)

# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:217:0
list(APPEND TYPE_FILES include/fwd__timed/ConnT_fwd__timed_Time.hpp src/fwd__timed/ConnT_fwd__timed_Time.cpp)


list (APPEND PORT_FILES src/fwd__timed/Inter_fwd__timed_Time.cpp 
                        include/fwd__timed/Inter_fwd__timed_Time.hpp)

list (APPEND PORT_FILES src/fwd__timed/InterV_fwd__timed_Time.cpp 
                        include/fwd__timed/InterV_fwd__timed_Time.hpp)

# CPV
list (APPEND PORT_FILES src/fwd__timed/CPV_Time__TimePort.cpp
                        include/fwd__timed/CPV_Time__TimePort.hpp)

# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:27:2
list(APPEND TYPE_FILES include/fwd__timed/PT_fwd__timed_trans.hpp src/fwd__timed/PT_fwd__timed_trans.cpp)


list (APPEND PORT_FILES src/fwd__timed/ConnPort_fwd__timed_trans.cpp
                        include/fwd__timed/ConnPort_fwd__timed_trans.hpp)

list (APPEND PORT_FILES src/fwd__timed/CpndEPort_fwd__timed_trans.cpp 
                        include/fwd__timed/CpndEPort_fwd__timed_trans.hpp)

list (APPEND PORT_FILES src/fwd__timed/AtomEPort_fwd__timed_trans.cpp 
                        include/fwd__timed/AtomEPort_fwd__timed_trans.hpp)

list (APPEND PORT_FILES src/fwd__timed/AtomIPort_fwd__timed_trans.cpp
                        include/fwd__timed/AtomIPort_fwd__timed_trans.hpp)

list (APPEND PORT_FILES src/fwd__timed/PV_fwd__timed_trans.cpp
                        include/fwd__timed/PV_fwd__timed_trans.hpp)

list (APPEND PORT_FILES src/fwd__timed/QPR_fwd__timed_trans.cpp
                        include/fwd__timed/QPR_fwd__timed_trans.hpp)

# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:28:2
list(APPEND TYPE_FILES include/fwd__timed/PT_fwd__timed_trigger.hpp src/fwd__timed/PT_fwd__timed_trigger.cpp)


list (APPEND PORT_FILES src/fwd__timed/ConnPort_fwd__timed_trigger.cpp
                        include/fwd__timed/ConnPort_fwd__timed_trigger.hpp)

list (APPEND PORT_FILES src/fwd__timed/CpndEPort_fwd__timed_trigger.cpp 
                        include/fwd__timed/CpndEPort_fwd__timed_trigger.hpp)

list (APPEND PORT_FILES src/fwd__timed/AtomEPort_fwd__timed_trigger.cpp 
                        include/fwd__timed/AtomEPort_fwd__timed_trigger.hpp)

list (APPEND PORT_FILES src/fwd__timed/AtomIPort_fwd__timed_trigger.cpp
                        include/fwd__timed/AtomIPort_fwd__timed_trigger.hpp)

list (APPEND PORT_FILES src/fwd__timed/PV_fwd__timed_trigger.cpp
                        include/fwd__timed/PV_fwd__timed_trigger.hpp)

list (APPEND PORT_FILES src/fwd__timed/QPR_fwd__timed_trigger.cpp
                        include/fwd__timed/QPR_fwd__timed_trigger.hpp)

# /home/siham/bipping/bipnfd/GO/fwd-bip-smc/fwd-bip-smc-timed/ndn-bip-fwd/fwd_timed.bip:30:2
list(APPEND TYPE_FILES include/fwd__timed/PT_fwd__timed_TimePort.hpp src/fwd__timed/PT_fwd__timed_TimePort.cpp)


list (APPEND PORT_FILES src/fwd__timed/ConnPort_fwd__timed_TimePort.cpp
                        include/fwd__timed/ConnPort_fwd__timed_TimePort.hpp)

list (APPEND PORT_FILES src/fwd__timed/CpndEPort_fwd__timed_TimePort.cpp 
                        include/fwd__timed/CpndEPort_fwd__timed_TimePort.hpp)

list (APPEND PORT_FILES src/fwd__timed/AtomEPort_fwd__timed_TimePort.cpp 
                        include/fwd__timed/AtomEPort_fwd__timed_TimePort.hpp)

list (APPEND PORT_FILES src/fwd__timed/AtomIPort_fwd__timed_TimePort.cpp
                        include/fwd__timed/AtomIPort_fwd__timed_TimePort.hpp)

list (APPEND PORT_FILES src/fwd__timed/PV_fwd__timed_TimePort.cpp
                        include/fwd__timed/PV_fwd__timed_TimePort.hpp)

list (APPEND PORT_FILES src/fwd__timed/QPR_fwd__timed_TimePort.cpp
                        include/fwd__timed/QPR_fwd__timed_TimePort.hpp)

include_directories("include")
add_library(pack_fwd__timed 
                      ${TYPE_FILES}
                      ${PORT_FILES}
                      ${EXTRA_SRC}
                      ${EXTRA_OBJ})
