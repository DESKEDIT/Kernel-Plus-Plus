// Modules
#include "utils.h"
#include "splitstring.h"

using namespace std; // using std

int main() // Main function
{
    string version = " 0.1.2";
    string pretype = " Beta";
    string year = " 2025";
    string day = " 05";
    string month = " August";
    bool firstcmd = false;
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
        cout << "Kernel>>>$";
        cin >> command;
        // Convert command into lowercase
        for (char& c : command) {
            c = tolower(c);
        }
        // Split command into list
        vector<string> args = splitString(command);
        if (args[0] == ""){
            //Do nothing
        } else if (args[0] == "ver"){
            cout << "DeskEdit Kernel++" << pretype << version << endl << "COPYRIGHT(C)" << year << " DeskEdit running on ";
            system("ver");
        } else if (args[0] == "help"){
            cout << "HELP: SHOWS THIS MENU\nVER: SHOWS THE KERNEL VERSION\nDADDRV: START DADDRIVE\nCMD: STARTS A SESSION OF WINDOWS COMMAND LINE\nEXIT/QUIT: EXITS KERNEL\nCOPYRIGHT [TOU | TOUS | DOCS]: TOU: FULL COPYRIGHT TERMS, TOUS: SHORT COPYRIGHT TERMS, DOCS: OPENS KERNEL DOCS IN WEB BROWSER\nCREWEB-VIEW: VIEW THE CREATORS WEBSITE";
        } else if (args[0] == "quit" || args[0] == "exit"){
            running = false;
        } else if (args[0] == "creweb-view"){
            system("start https://sites.google.com/view/eags-official");
        } else if (args[0] == "cmd"){
            system("%systemroot%\\System32\\cmd.exe");
        } else {
            cout << "Invalid command: '" << args[0] << "'";
        }
        if (args[0] != "" & args[0] != "exit" & args[0] != "quit"){
            cout << endl;
        }
    }
}