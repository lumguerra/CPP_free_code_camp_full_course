#include <iostream>
#include <cstring>

template < typename T > T maximum( T a, T b)
{
    return (a > b) ? a : b;
}

template <> 
const char * maximum<const char *> (const char * a, const char * b)
{
    return ( strcmp(a , b) > 0 ) ? a : b;
}

int main(){
    
    int a {1};
    int b {2};
    double c {3.1};
    double d {4.2};
    std::string e {"Hello"};
    std::string f {"World"};
    const char *g {"Wild"};
    const char *h {"Animal"};

    std::cout << "a and b: " << maximum(a , b) << "\n";
    std::cout << "c and d: " << maximum(c , d) << "\n";
    std::cout << "e and f: " << maximum(e , f) << "\n";
    std::cout << "g and h: " << maximum(g , h) << "\n";

    return 0;

}