#include "utils.hpp"
#include "funccl.hpp"

int helpfunc(std::vector<std::string> args) {
    std::cout << "This is a test of the functions!";
    return 0;
}

std::vector<KFunction> def_funcs = {KFunction("help", 0, 0, helpfunc)};