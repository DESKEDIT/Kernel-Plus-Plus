cmake_minimum_required(VERSION 3.16)
project(kernel)
set(KERNEL_VERSION 0.2.1-dev)

add_executable(kernel
    src/hinclude.hpp
    src/m.hpp
    src/run.hpp
    src/strsplit.hpp
    src/syserr.hpp
    src/utils.hpp
    src/main.cpp
)

if(MSVC)
   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
endif()
