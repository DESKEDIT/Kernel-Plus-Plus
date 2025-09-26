#include "utils.hpp"
#include "strsplit.hpp"

#define K_PRETYPE (std::string)"Beta"
#define K_VERSION (std::string)"0.1.5"
#define K_DAY 25
#define K_MON 9
#define K_YEAR 2025

using namespace std;

int main () {
	cout << "Kernel ++ " << K_PRETYPE << " " << K_VERSION << " of " << K_YEAR << "." << K_MON << "." << K_DAY;
	string input;
	vector<string> splitString;
	string arg0;
	char delim = ' ';
	while (true) {
		cout << "\n>>>$";
		getline(cin, input);
		splitString = split(input, ' ');
		arg0 = splitString.at(0);
		cout << arg0;
	}
	cout << endl;
	return 0;
}

