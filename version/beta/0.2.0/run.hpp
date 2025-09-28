#include "utils.hpp"
#include "vars.hpp"

// Runs a std::vector<std::string> as a function
int runcode(std::vector<std::string> code) {
	const std::string arg0 = code[0];
	int RVAL = 0;
	if (arg0 == "help") {
		std::cout <<
				K_STARTUP << " - implemented commands" << std::endl <<
				std::endl << "VER : prints the version number to the screen" <<
				std::endl << "EXIT / QUIT : quits Kernel";
	} else if (arg0 == "exit" || arg0 == "quit") {
		return 1;
	} else if (arg0 == "ver") {
		std::cout << K_STARTUP;
	} else {
		std::cout << "Unknown or unimplemented command";
	}
	return RVAL;
};
