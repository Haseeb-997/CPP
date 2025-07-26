// OPERATORS
#include <iostream>
using namespace std;
int main()
{
    // // Assignment operators, used to assign variables
    // int a = 3, b = 4;
    // // Arithmatic operators
    // cout << "The sum of a and b is " << a + b << endl;
    // cout << "The diff of a and b is " << a - b << endl;
    // cout << "The multiplication of a and b is " << a * b << endl;
    // cout << "The division of a and b is " << a / b << endl;
    // cout << "The modulo of a and b is " << a % b << endl;
    // cout << "The value of a++ is " << a++ << endl;
    // cout << "The value of a-- is " << a-- << endl;
    // cout << "The value of ++a is " << ++a << endl;
    // cout << "The value of --a is " << --a << endl
    //      << endl;
    // // Comparison operators
    // cout << "The value of a==b is " << (a == b) << endl;
    // cout << "The value of a!=b is " << (a != b) << endl;
    // cout << "The value of a<b is " << (a < b) << endl;
    // cout << "The value of a=> is " << (a > b) << endl;
    // cout << "The value of a<=b is " << (a <= b) << endl;
    // cout << "The value of a>=> is " << (a >= b) << endl
    //      << endl;
    // // Logical operators
    // cout << "The value of ((a==b)&&(a<=b)) logical operator is " << ((a == b) && (a <= b)) << endl;
    // cout << "The value of ((a==b)||(a<=b)) logical operator is " << ((a == b) || (a <= b)) << endl;
    // cout << "The value of (!(a<b)) logical operator is " << (!(a < b)) << endl;

    int time = 20;
    // if (time < 18)
    // {
    //     cout << "Good day" << endl;
    // }
    // else
    // {
    //     cout << "Good evening" << endl;
    // }

    // Ternary operator----variable = (condition) ? expressionTrue : expressionFalse;
    string a = (time < 18) ? "Good day" : "Good evening";
    cout << a << endl;
    cout << max(2, 4) << endl;

    system("pause");
    return 0;
}