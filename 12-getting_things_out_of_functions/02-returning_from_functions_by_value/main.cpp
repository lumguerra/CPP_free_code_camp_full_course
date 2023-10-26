#include <iostream>
#include <string>
using namespace std;

string string_conc(string str1, string str2){
    string concatenated = str1 + str2;
    return concatenated;
}

int main()
{
    string str1 {"jklashdmn "};
    string str2 {"WTF???"};
    string str1and2 = string_conc(str1, str2);
    cout << str1and2; 
    return 0;
}
