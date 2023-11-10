#include <iostream>
using namespace std;

class Dog{

    public:
        string m_name;
};

struct Cat{
    string m_name;
};

struct Point{
    double x;
    double y;
};

void print_point(const Point &point){
    cout << "x[" << point.x << "]\n";
    cout << "y[" << point.y << "]\n";
}

int main(){

    Dog dog1;
    dog1.m_name = "Olando";
    
    Cat cat1;
    cat1.m_name = "Jack";

    cout << cat1.m_name << '\n';
    cout << dog1.m_name << '\n';

    Point point1;
    point1.x = 12.3;
    point1.y = 33;

    print_point(point1);

    point1.x = 4.3;
    point1.y = 993;

    print_point(point1);

    return 0;
}