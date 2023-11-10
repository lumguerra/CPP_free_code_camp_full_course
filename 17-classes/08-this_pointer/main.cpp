#include <iostream>
#include <string_view>

using namespace std;

class Dog{

    public:
        Dog() = default;
        Dog(string_view name_param, string_view breed_param, int age_param);
        ~Dog();

        Dog& dog_name_setter(string_view name){
            this -> name = name;
            return *this;
        }

        Dog& dog_breed_setter(string_view breed){
            this -> breed = breed;
            return *this;
        }

        Dog& dog_age_setter(int age){
            *p_age = age;
            return *this;
        }

        void print_dog_info(){
            cout << "Object adress: " << this << "\n";
            cout << "Dog name: " << name << "\n";
            cout << "Dog breed: " << breed << "\n";
            cout << "Dog age: " << *p_age << "\n";
        }
    
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
        cout << "Dog constructed for: " << name << " at: " << this << "\n";
}

Dog::~Dog(){
    delete p_age;
    cout << "Dog destructed for: " << name << "\n";
}

int main (){

    Dog dog1("oswaldo", "vira-lata", 14);
    dog1.print_dog_info();
    dog1.dog_age_setter(3).dog_breed_setter("pastor").dog_name_setter("lax");
    dog1.print_dog_info();

    cout<< "done" << "\n";

    return 0;
}