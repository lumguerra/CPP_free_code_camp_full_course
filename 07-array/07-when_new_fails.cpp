#include <iostream>

int main(){
    int *ptr {new(std::nothrow) int [10000000000]};

    if(!ptr){
        std::cout << "Memory allocation faild" << "\n";
    } else{
        std::cout << "fished successfully" << "\n";
    }
    

    return 0;
}