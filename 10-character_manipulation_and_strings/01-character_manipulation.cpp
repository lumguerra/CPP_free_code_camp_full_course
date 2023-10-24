#include <iostream>

int main()
{
    char message[]{"My name is Lucas, and I'm learning c++"};

    std::cout << message << "\n";

    size_t blank_count {0};
    for ( int i{0}; i < std::size(message); ++i ){        
        if (isblank(message[i]) == 1){
            std::cout << "Blank character found at index[" << i << "]\n";
            blank_count++;
        }              
    }
    std::cout << "Blank characters found: " << blank_count;
    
    return 0;
}
