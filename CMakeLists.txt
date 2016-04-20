cmake_minimum_required (VERSION 2.8)
project (EratosthenesSieveImplementation)

set (EratosthenesSieveImplementation_VERSION_MAJOR 0)
set (EratosthenesSieveImplementation_VERSION_MINOR 1)

set(SOURCES src/main.cpp src/terminalinputoutput.cpp src/calculateprimes.cpp)
add_executable(EratosthenesSieveImplementation ${SOURCES})

set_property(TARGET EratosthenesSieveImplementation PROPERTY CXX_STANDARD 11)
set_property(TARGET EratosthenesSieveImplementation PROPERTY CXX_STANDARD_REQUIRED ON)
