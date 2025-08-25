// Modules
#include "utils.h"
#include "splitstring.h"

using namespace std; // using std

int main() // Main function
{
    std::string version = " 0.1.1";
    std::string pretype = " Beta";
    std::string year = " 2025";
    std::string day = " 05";
    std::string month = " August";
    // Initialisation text
    cout << "DeskEdit Kernel++" << pretype << version << endl << "COPYRIGHT(C)" << year << " DeskEdit running on ";
    system("ver");
    // Initialise variables
    bool running = true;
    // Main loop
    while (running)
    {
        string command;
        // Input
        cout << endl << "Kernel>>>$";
        cin >> command;
        // Convert command into lowercase
        for (char& c : command) {
            c = std::tolower(c);
        }
        // Split command into list
        vector<std::string> args = splitString(command);
        if (args[0] == ""){
            //Do nothing
        } else if (args[0] == "ver"){
            cout << "DeskEdit Kernel++" << pretype << version << endl << "COPYRIGHT(C)" << year << " DeskEdit running on ";
            system("ver");
        } else if (args[0] == "help"){
            cout << "HELP: SHOWS THIS MENU\nVER: SHOWS THE KERNEL VERSION\nDADDRV: START DADDRIVE\nCMD: STARTS A SESSION OF WINDOWS COMMAND LINE\nEXIT/QUIT: EXITS KERNEL\nCOPYRIGHT [TOU | TOUS | DOCS]: TOU: FULL COPYRIGHT TERMS, TOUS: SHORT COPYRIGHT TERMS, DOCS: OPENS KERNEL DOCS IN WEB BROWSER\nCREWEB-VIEW: VIEW THE CREATORS WEBSITE";
        } else if (args[0] == "quit"){
            running = false;
        } else if (args[0] == "exit"){
            running = false;
        } else {
            cout << "Invalid command: '" << args[0] << "'";
        }
    }
}