#ifndef SYSERR
#include "utils.hpp"
void KrnlErr(int code, std::string msg = "NULLITM") {
    std::cout << "Kernel has encountered an error and can not continue" << std::endl <<
                 "If you don't believe this error code or error message has been reported already, please report it on the Issues section on the GitHub page for Kernel." << std::endl;
    if (0 != code) std::cout << "Error code: " << code << std::endl;
    if ("NULLITM" != msg) std::cout << "Error message: " << msg << std::endl;
}
#define SYSERR
#endif/*SYSERR*/