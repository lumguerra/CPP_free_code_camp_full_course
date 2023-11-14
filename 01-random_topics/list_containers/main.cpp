#include <iostream>
#include <list>

using namespace std;

int main(){

    list<string>Names;

    Names.push_front("lucas");
    Names.push_front("Sarah");
    Names.push_back("Oswaldo");
    Names.push_back("fabio");

    list<string>::iterator itr;
    itr = Names.begin();

    for(itr; itr != Names.end(); itr++ ){
        cout << *itr << "\n"; 
    }

    return 0;
}
