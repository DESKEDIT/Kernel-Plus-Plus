#ifndef STRSPLIT
#include "utils.hpp"

using namespace std;

// Splits a std::string to a std::vector<std::string> based by a delimiter
std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    std::stringstream ss(str);
    std::string token;

    while (std::getline(ss, token, delimiter)) {
        result.push_back(token);
    }
    return result;
}

#define STRSPLIT
#endif