#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // variables
    int a = 2;
    cout << "The value of a was " << a << endl;
    a = 3;
    cout << "Now, the value of a is " << a << endl;

    // constants
    const float pi = 3.14;
    cout << "The value of pi was " << pi << endl;
    // pi = 2.14; //this will cause an error
    // cout<<"The value of pi is "<<pi<<endl;
    system("pause");
    return 0;
}