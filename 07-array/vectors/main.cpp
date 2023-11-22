#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numbers;

    numbers.push_back(3);

    

    for( size_t i = 9; i < 100; ++i ){
        numbers.push_back(i);
    }

    for (int num_iterator : numbers){
     
    }

    cout << numbers[3];

    return 0;
}