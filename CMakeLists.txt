cmake_minimum_required(VERSION 3.10)

set (CMAKE_CXX_STANDARD 11)

project(Hello3rdParty)

file(GLOB THIS_3RD_PARTY
    ./my3rdparty/include/*.h
    ./my3rdparty/src/*.cpp
)

add_library(libMy3rdParty ${THIS_3RD_PARTY})

file(GLOB THIS_APP
    ./include/*.h
    ./src/*.cpp
)

include_directories("./my3rdparty/include/")
include_directories("./include/")
add_executable(Hello3rdParty ${THIS_APP})
target_link_libraries(Hello3rdParty libMy3rdParty)

