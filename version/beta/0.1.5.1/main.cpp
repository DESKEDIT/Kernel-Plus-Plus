#include "utils.hpp"
#include "hinclude.hpp"

#define K_PRETYPE (std::string)"Beta"
#define K_VERSION (std::string)"0.1.5.1"
#define K_DAY 27
#define K_MON 9
#define K_YEAR 2025

using namespace std;

bool isInStrVec(vector<string> vec, string str) {
	for (string val : vec)
		if (val == str)
			return true;
	return false;
}

int main () {
	cout << "Kernel ++ " << K_PRETYPE << " " << K_VERSION << " of " << K_YEAR << "." << K_MON << "." << K_DAY;
	string input;
	vector<string> splitString;
	vector<string> nNlRF = {"exit", ""};
	string arg0;
	int retval;
	char delim = ' ';
	cout << endl;
	bool running = true;
	while (true) {
		cout << ">>>$";
		getline(cin, input);
		splitString = split(input, ' ');
		if (splitString.size() != 0) {
			retval = runcode(splitString);
			if (retval == 1) {
				break;
			} else if (retval != 0) {
				// Code for doing an error
			}
		}
		if (input != "") cout << endl;
	}
	cout << endl;
	return 0;
}

