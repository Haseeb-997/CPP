#include <iostream>
using namespace std;

int g = 10;
int main()
{
    int g = 24;
    cout << "The value of local variable is " << g << endl;
    cout << "The value of globe variable is " << ::g << endl;
    // "::" is [scope resolution operator]
    int a = 4;
    int &b = a;
    cout << "The value of *normal variable* a is " << a << endl;
    cout << "The value of *reference variable* b is " << b << endl;
    system("pause");
    return 0;
}