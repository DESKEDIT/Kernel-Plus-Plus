#ifndef OS_TOOLS

#include <cstdlib>

bool IsOSCompatible()
{
#if defined(__unix__) || defined(__unix) || defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(_WIN32) || defined(_WIN64) 
  return true;
#endif
  return false;
}

void ClearScreen()
{
#if defined(__unix__) || defined(__unix) || defined(__linux__) || (defined(__APPLE__) && defined(__MACH__))
  system("clear");
#elif defined(_WIN32) || defined(_WIN64)
  system("cls");
#endif
}

#define OS_TOOLS
#endif
