#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] {"home/folder/file"};
    char *output = strrchr(str, '/');
    cout << output + 1;

    return 0;
}