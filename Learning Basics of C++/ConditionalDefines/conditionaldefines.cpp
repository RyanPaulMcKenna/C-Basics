#if defined (_WIN32)
#define PLATFORM "Windows"
#elif defined (__linux)
#define PLATFORM "Linux"
#endif
#include <iostream>
using namespace std;

int main()
{
cout << PLATFORM << "System" << endl;
return 0;
}