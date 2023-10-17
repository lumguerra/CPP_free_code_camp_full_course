#include <iostream>
using namespace std;

int main()
{
    auto var1 {1};
    auto var2 {1.2};
    auto var3 {1.3f};
    auto var4 {123l};
    auto var5 {'a'};
    auto var6 {123u};
    auto var7 {123ul};
    auto var8 {123ull};

    cout << "size of var1: " << sizeof(var1) << "\n";
    cout << "size of var2: " << sizeof(var2) << "\n";
    cout << "size of var3: " << sizeof(var3) << "\n";
    cout << "size of var4: " << sizeof(var4) << "\n";
    cout << "size of var5: " << sizeof(var5) << "\n";
    cout << "size of var6: " << sizeof(var6) << "\n";
    cout << "size of var7: " << sizeof(var7) << "\n";
    cout << "size of var8: " << sizeof(var8) << "\n";

    return 0;
}