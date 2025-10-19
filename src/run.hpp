#ifndef RUNMOD
#include "m.hpp"
#include "syserr.hpp"

#include "utils.hpp"

// Runs a std::vector<std::string> as a function
int runcode(std::vector<std::string> code) {
	const std::string arg0 = code[0];
	int RVAL = 0;
	if (arg0 == "help") {
		std::cout <<
				K_STARTUP << " - implemented commands" << std::endl <<
				std::endl << "VER : prints the version number to the screen" <<
				std::endl << "EXIT / QUIT : quits Kernel" <<
				std::endl << "SYSERR : executes the error command with error message STD_USRMADE_ERR";
	} else if (arg0 == "exit" || arg0 == "quit") {
		return 1;
	} else if (arg0 == "ver") {
		std::cout << K_STARTUP;
	} else if (arg0 == "syserr") {
		KrnlErr("STD_USRMADE_ERR");
		RVAL = 1;
	} else {
		std::cout << "Unknown or unimplemented command";
	}
	return RVAL;
};

#define RUNMOD
#endif