#include <iostream>
using namespace std;
int main()
{
    /*
    https://en.cppreference.com/w/cpp/language/operator_precedence.html
    Operator Precedence and accosiativity link
    */
    int a = 3, b = 4;
    int c = ((a * b) + 7) + 48 - 37;
    cout << c;

    system("pause");
    return 0;
}