#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout << "Flush test\n\n" << flush; //flush the buffer

    cout << "Unformatted table:\n";
    cout << "------------------\n";
    cout << "Name Age Sex\n";
    cout << "------------------\n";
    cout << "Lucas 34 M\n";
    cout << "Sarah 27 F\n";
    cout << "Samuel 32 M\n\n";

    int col_width {20};

    cout << "Formatted table:\n";
    cout << "------------------\n";
    cout << setw(col_width) << "Name" << setw(col_width) << "Age" << setw(col_width) << "Sex\n";
    cout << setw(col_width) << "Lucas" << setw(col_width) << "34" << setw(col_width) << "M\n";
    cout << setw(col_width) << "Sarah" << setw(col_width) << "27" << setw(col_width) << "F\n";
    cout << setw(col_width) << "Samuel" << setw(col_width) << "32" << setw(col_width) << "M\n\n";

    //justify to the left
    
    cout << "Justify to the left:\n";
    cout << left;
    cout << setfill('-');
    cout << setw(col_width) << "Name" << setw(col_width) << "Age" << setw(col_width) << "Sex" << endl;
    cout << setw(col_width) << "Lucas" << setw(col_width) << "34" << setw(col_width) << "M" << endl;
    cout << setw(col_width) << "Sarah" << setw(col_width) << "27" << setw(col_width) << "F" << endl;
    cout << setw(col_width) << "Samuel" << setw(col_width) << "32" << setw(col_width) << "M\n\n" << endl;

    bool bool1 {true};
    bool bool2 {false};

    cout << "bool1: " << bool1 << "\n";
    cout << "bool2: " << bool1 << "\n\n";

    cout << boolalpha;
    cout << "bool1: " << bool1 << "\n";
    cout << "bool2: " << bool1 << "\n\n";

    cout << noboolalpha;
    cout << "bool1: " << bool1 << "\n";
    cout << "bool2: " << bool1 << "\n\n";

    //showpos

    int pos_number {34};
    int neg_number {-43};

    cout << pos_number << "\n"; 
    cout << neg_number << "\n\n";  

    cout << showpos;
    cout << pos_number << "\n"; 
    cout << neg_number << "\n\n";  

    cout << noshowpos;
    cout << pos_number << "\n"; 
    cout << neg_number << "\n\n";  

    //numbers representation

    pos_number = 98236573;

    cout << "pos_number dec: " << pos_number << "\n";
    cout << "pos_number hex: " << hex << pos_number << "\n";
    cout << "pos_number octa: " << oct << pos_number << "\n";

    //uppercase

    cout << uppercase;
    cout << "pos_number hex: " << hex << pos_number << "\n";

    double num1 {4.00};
    double num2 {6};
    double num3 {7.25};

    cout << num1 << "\n";
    cout << num2 << "\n";
    cout << num3 << "\n\n";

    cout << showpoint;
    cout << num1 << "\n";
    cout << num2 << "\n";
    cout << num3 << "\n";

    return 0;
}