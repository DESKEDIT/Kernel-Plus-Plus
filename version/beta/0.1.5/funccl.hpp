#include "utils.hpp"

class KFunction {
    private:
    std::string f_name;
    int (*f_runf)(std::vector<std::string>);
    int f_argmaxc;
    int f_argminc;
    public:
    KFunction(std::string name, int argminc, int argmaxc, int (*runf)(std::vector<std::string>)){
        f_runf = runf;
        f_name = name; 
        f_argminc = argminc;
        f_argmaxc = argmaxc;
    };
    int run(std::vector<std::string> args) {
        return 0;
    };
};