// Modules
#include "utils.h"

using namespace std; // using std

int main() // Main function
{
    std::string version = " 0.1.0";
    std::string pretype = " Beta";
    std::string year = " 2025";
    std::string day = " 04";
    std::string month = " August";
    // Initialisation text
    cout << "DeskEdit Kernel++" << pretype << version << endl << "COPYRIGHT(C)";
    // Initialise variables
    bool running = true;
    string command;
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
        string dependency = " ";
        string args[16]; 
        string text;
        for (int x = 0; x != command.length(); ++x)
        {
            text = text + command[x];
            if (command[x] == dependency[0])
            {
                args->append(text);
                text = "";
            }
        }
        if (args[0] == ""){
            //Do nothing
        } else if (args[0] == "ver"){
        } else if (args[0] == "help"){
            cout << "HELP: SHOWS THIS MENU\nVER: SHOWS THE KERNEL VERSION\nDADDRV: START DADDRIVE\nCMD: STARTS A SESSION OF WINDOWS COMMAND LINE\nEXIT/QUIT: EXITS KERNEL\nCOPYRIGHT [TOU | TOUS | DOCS]: TOU: FULL COPYRIGHT TERMS, TOUS: SHORT COPYRIGHT TERMS, DOCS: OPENS KERNEL DOCS IN WEB BROWSER\nCREWEB-VIEW: VIEW THE CREATORS WEBSITE";
        } else {
            cout << args;
        }
    }
}