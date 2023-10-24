#include <iostream>

int main()
{
    char message[]{"My name is Lucas, and I'm learning c++"};

    std::cout << message << "\n";
    size_t islower_count {0};
    size_t isupper_count {0};

    for ( size_t n : message){
        if (std::islower(n)){
            islower_count++;
        }
        if (std::isupper(n)){
            isupper_count++;
        }
    }     

    std::cout << "There are " << islower_count << "lower characters\n";
    std::cout << "There are " << isupper_count << "upper characters\n";
    
    return 0;
}
