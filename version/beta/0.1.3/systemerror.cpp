#include "utils.h"
#include "systemerror.h"
using namespace std;
void sysError(const char *_error)
{
    system("cls");
    system("color b0");
    cout << "KERNEL has ran into a problem and needs to restart...\nPlease refer to the StopCode and contact Support\n  Stop Code: " << _error << endl;
    if (_error == "This is a test of the Error function! Is it cool?!!!");
    {
        cout << "EXTRA NOTES:\n    SO COOL" << endl;
    }
    system("pause");
}