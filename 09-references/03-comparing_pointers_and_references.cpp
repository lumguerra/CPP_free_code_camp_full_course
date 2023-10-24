#include <iostream>
using namespace std;

int main() {
  double d_var {4.5};
  double &ref_d_var {d_var};
  double *p_d_var {&d_var};
  
  cout << "d_var value: " << d_var << "\n";
  cout << "ref_d_var value: " << ref_d_var << "\n";
  cout << "p_d_var value: " << *p_d_var << "\n";
  cout << "d_var adress: " << &d_var << "\n";
  cout << "ref_d_var adress: " << &ref_d_var << "\n";
  cout << "p_d_var adress: " << p_d_var << "\n";
  
  double other_value {43.7};

  p_d_var = &other_value;
  
  cout << "===========================================\n";
  cout << "d_var value: " << d_var << "\n";
  cout << "ref_d_var value: " << ref_d_var << "\n";
  cout << "p_d_var value: " << *p_d_var << "\n";
  cout << "d_var adress: " << &d_var << "\n";
  cout << "ref_d_var adress: " << &ref_d_var << "\n";
  cout << "p_d_var adress: " << p_d_var << "\n";
  cout << "other_value adress: " << &other_value << "\n";
  
}