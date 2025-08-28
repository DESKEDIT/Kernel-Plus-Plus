// Modules
#include "utils.h"
#include "splitstring.h"
#include "systemerror.h"

using namespace std; // using std

int main() // Main function
{
    system("cls");
    string k_version = " 0.1.4";
    string k_pretype = " Beta";
    string k_year = " 2025";
    string k_day = " 28";
    string k_month = " August";
    // Initialisation text
    cout << "DeskEdit Kernel++" << k_pretype << k_version << endl << "COPYRIGHT(C)" << k_year << " DeskEdit running on ";
    system("ver");
    // Initialise variables
    bool running = true;
    string dvf = "";
    string dt = "";
    bool dds = false;
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
            cout << "DeskEdit Kernel++" << k_pretype << k_version << endl << "COPYRIGHT(C)" << k_year << " DeskEdit running on ";
            system("ver");
        } else if (_args[0] == "help"){
            cout << "HELP: SHOWS THIS MENU\nVER: SHOWS THE KERNEL VERSION\nDADDRV: START DADDRIVE++\nCMD: STARTS A SESSION OF WINDOWS COMMAND LINE\nEXIT/QUIT: EXITS KERNEL\nCOPYRIGHT [TOU | TOUS | DOCS]: TOU: FULL COPYRIGHT TERMS, TOUS: SHORT COPYRIGHT TERMS, DOCS: OPENS KERNEL DOCS IN WEB BROWSER\nCREWEB-VIEW: VIEW THE CREATORS WEBSITE";
        } else if (_args[0] == "quit" || _args[0] == "exit"){
            running = false;
        } else if (_args[0] == "creweb-view"){
            system("start https://sites.google.com/view/eags-official");
        } else if (_args[0] == "cmd"){
            system("%systemroot%\\System32\\cmd.exe");
        } else if (_args[0] == "err"){
            sysError("This is a test of the Error function! Is it cool?!!!");
            running = false;
        } else if (_args[0] == "daddrv"){
            if (!dds){
                dvf = "0.1";
                dt = "\n\nPROGRAM CFGNAME: DC KERNEL DEVICE\nNAME: DCPPV0\nversion " + dvf;
                dds = true;
                if (dt == dt & dvf == dvf & dds) cout << "----------\n|DADDRIVE|\n----------\n\nDadDrive is installed in Memory" << dt; else {sysError("DADDRV_CFG_FAIL"); running = false;}
            } else {
                cout << "----------\n|DADDRIVE|\n----------\n\nDadDrive is already installed in Memory" << dt;
            }
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