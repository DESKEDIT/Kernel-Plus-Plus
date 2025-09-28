#include "utils.hpp"
#include "hinclude.hpp"

#include "vars.hpp"

using namespace std;

bool isInStrVec(vector<string> vec, string str) {
	for (string val : vec)
		if (val == str)
			return true;
	return false;
}

int main () {
	cout << K_STARTUP;
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
		// Convert string to lowercase
		transform(input.begin(), input.end(), input.begin(), 
				[](unsigned char c) { return tolower(c); });
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

