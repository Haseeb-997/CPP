#include <iostream>
using namespace std;

// The priority of local variable is higher than globle variable. Variable Scope 

int glo = 94; // globle variable

void num()
{
    int glo = 1; // local variable
    cout << glo;
}

int main()
{
    // data types
    int i = 30;
    float f = 21.764;
    char c = 'L';
    bool b = false;
    cout << "It is very easy\nThe value of i is " << i << " (integer)\nThe value of f is " << f << " (floating)\nThe value of c is " << c << " (character)\n";
    cout << "My house number is ";
    num();
    cout << b << glo << ".";

    system("pause");
    return 0;
}
