// Modules
#include "utils.h"
#include "splitstring.h"
#include "systemerror.h"

using namespace std; // using std

int main() // Main function
{
    system("cls");
    string version = " 0.1.3";
    string pretype = " Beta";
    string year = " 2025";
    string day = " 27";
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
        string _command;
        // Input
        cout << "Kernel>>>$";
        cin >> _command;
        // Convert command into lowercase
        for (char& c : _command) {
            c = tolower(c);
        }
        // Split command into list
        vector<string> _args = splitString(_command);
        if (_args[0] == ""){
            //Do nothing
        } else if (_args[0] == "ver"){
            cout << "DeskEdit Kernel++" << pretype << version << endl << "COPYRIGHT(C)" << year << " DeskEdit running on ";
            system("ver");
        } else if (_args[0] == "help"){
            cout << "HELP: SHOWS THIS MENU\nVER: SHOWS THE KERNEL VERSION\nDADDRV: START DADDRIVE\nCMD: STARTS A SESSION OF WINDOWS COMMAND LINE\nEXIT/QUIT: EXITS KERNEL\nCOPYRIGHT [TOU | TOUS | DOCS]: TOU: FULL COPYRIGHT TERMS, TOUS: SHORT COPYRIGHT TERMS, DOCS: OPENS KERNEL DOCS IN WEB BROWSER\nCREWEB-VIEW: VIEW THE CREATORS WEBSITE";
        } else if (_args[0] == "quit" || _args[0] == "exit"){
            running = false;
        } else if (_args[0] == "creweb-view"){
            system("start https://sites.google.com/view/eags-official");
        } else if (_args[0] == "cmd"){
            system("%systemroot%\\System32\\cmd.exe");
        } else if (_args[0] == "err"){
            sysError("This is a test of the Error function! Is it cool?!!!");
            running = false;
        } else {
            cout << "Invalid command: '" << _args[0] << "'";
        }
        if (_args[0] != "" & _args[0] != "exit" & _args[0] != "quit"){
            cout << endl;
        }
    }
    system("cls");
    system("color 0f");
}