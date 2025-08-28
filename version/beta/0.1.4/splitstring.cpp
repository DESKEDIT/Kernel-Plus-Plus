#include "utils.h"
#include "splitstring.h"
using namespace std;

// Function to split a string by a given delimiter
vector<string> splitString(const string& _input) {
    char delimiter = ' ';
    vector<string> result;
    stringstream ss(_input);
    string token;

    while (getline(ss, token, delimiter)) {
        if (!token.empty()) {
            result.push_back(token);
        }
    }

    return result;
}