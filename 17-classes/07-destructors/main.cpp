#include <iostream>
#include <string>
#include <string_view>

using namespace std;

class Dog{

    public:
        Dog() = default;
        Dog(string_view name_param, string_view breed_param, int age_param);
        ~Dog();
    
    private: 
        string name{};
        string breed{};
        int* p_age {nullptr};
        
};

Dog::Dog(string_view name_param, string_view breed_param, int age_param){
        name = name_param;
        breed = breed_param;
        p_age = new int;
        *p_age = age_param;
        cout << "Dog constructed for: " << name << "\n";
}

Dog::~Dog(){
    delete p_age;
    cout << "Dog destructed for: " << name << "\n";
}

void func(){
    Dog my_dog("oswaldo", "vira-lata", 14);
}

int main (){

    func();
    return 0;
}