rm -rf output
mkdir output
bipc.sh -I . -p fwd_timed -d "simulation()" --gencpp-output output --gencpp-cc-I ext-cpp --gencpp-no-serial
mkdir output/build
cd output/build
cmake ..
make


