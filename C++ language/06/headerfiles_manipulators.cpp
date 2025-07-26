// System Header Files https://en.cppreference.com/w/cpp/header.html
// User Defined Header Files
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Manipulators e.g setw(),endl
    int x = 11, y = 3454, z = 678901;
    cout << "The value of x without setw is: " << x << endl;
    cout << "The value of y without setw is: " << y << endl;
    cout << "The value of z without setw is: " << z << endl;
    cout << "The value of x with setw is: " << setw(4) << x << endl;
    cout << "The value of y with setw is: " << setw(5) << y << endl;
    cout << "The value of z with setw is: " << setw(6) << z << endl;

    system("pause");
    return 0;
}