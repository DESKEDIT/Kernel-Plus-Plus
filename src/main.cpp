#include "m.hpp"

#include "utils.hpp"
#include "hinclude.hpp"
#include "ostools.hpp"

using namespace std;

// Checks if an item is in a string vector
bool isInStrVec(vector<string> vec, string str) 
{
	for (string val : vec)
		if (val == str)
			return true;
	return false;
}

int main () 
{
  if (!IsOSCompatible())
  {
    KrnlErr(2, "The OS you are using is not compatible with this version of Kernel. Please use Unix, Linux, MacOS, or Windows to run Kernel.");
    return 2;
  }
	cout << K_STARTUP; // output the starting text

	// initial variables
	string input;
	vector<string> splitString;
	vector<string> nNlRF = {"exit", ""};
	string arg0;
	int retval;
	char delim = ' ';
	cout << endl;
	bool running = true;
	
	while (running) {
		// Get user input
		cout << ">>>$ ";
		getline(cin, input);
		// Convert string to lowercase
		transform(input.begin(), input.end(), input.begin(), 
				[](unsigned char c) { return tolower(c); });
		splitString = split(input, ' ');
		if (splitString.size() != 0) {
			retval = runcode(splitString);
			if (retval == 1) {
				running = false;
			} else if (retval != 0) {
				KrnlErr(retval);
        return retval;
			}
		}
		if (input != "") cout << endl;
	}
	cout << endl;
	return 0;
}

