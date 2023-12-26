#include <iostream>

int main(){

    std::cout << "Where do you live?\n";

    std::string input{""};

    std::cin >> input;
    std::cout << "I've heard great things about" << input << ". I'd like to go sometime.";

    return 0;
}