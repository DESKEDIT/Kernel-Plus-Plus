#include "utils.hpp"

// Runs a std::vector<std::string> as a function
int runcode(std::vector<std::string> code) {
	const std::string arg0 = code[0];
	int RVAL = 0;
	if (arg0 == "help") {
		std::cout << "test";
	} else if (arg0 == "exit" || arg0 == "quit") {
		return 1;
	} else {
		std::cout << "Unknown or unimplemented command";
	}
	return RVAL;
};
