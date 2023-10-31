#include <iostream>
using namespace std;

auto maximum(const auto &a, const auto &b)

int main(){
    
    int a{43};
    int b{45};
    auto result = maximum(a, b);
    cout << "The maximum is: " << result << endl;
    cout << "a adress out: " << &a << "\n";

    return 0;
}

auto maximum(const auto &a, const auto &b)
{
    cout << "a adress in: " << &a << "\n";
    return (a > b) ? a : b;
    
}
