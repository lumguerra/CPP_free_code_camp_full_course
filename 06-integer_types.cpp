#include <iostream>
using namespace std;

int main()
{
    int dog_count {5};
    int cat_count {43};
    int pets_count  {dog_count + cat_count};
    // You can also use () or = to assign the variable value, but in case you miss tha integer for a double (for exemple: int dog_count = 2.3, or int_dog (2.3)), the compiler could exclude the .3 because of the lack of memory size alocated, but using {} the compiler returns an error, so you can fix the code.

    cout << "dogs: " << dog_count << "\n";
    cout << "cats: " << cat_count << "\n";
    cout << "pets: " << pets_count << "\n";

    return 0;
}