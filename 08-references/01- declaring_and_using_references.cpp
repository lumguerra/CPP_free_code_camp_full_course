#include <iostream>
using namespace std;

int main() {
  double d_var {4.5};
  double &ref_d_var {d_var};
  
  cout << "d_var adress: " << &d_var << "\n";
  cout << "d_var value: " << d_var << "\n";
  cout << "d_var reference adress: " << &ref_d_var << "\n";
  cout << "d_var reference value: " << ref_d_var << "\n";
  
  d_var = 6.7;
  cout << "========================================\n";
  cout << "d_var adress: " << &d_var << "\n";
  cout << "d_var value: " << d_var << "\n";
  cout << "d_var reference adress: " << &ref_d_var << "\n";
  cout << "d_var reference value: " << ref_d_var << "\n";
  
  
  
}
