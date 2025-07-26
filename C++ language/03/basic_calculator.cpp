/*
>> "insertion operator"
<< "extraction operator"
keywords
https://en.cppreference.com/w/cpp/keywords.html
*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    float result;
    cout << "/**Welcome to basic calculator**/" << "\n";
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "The sum is " << num1 + num2 << endl;
    cout << "The differece is " << num1 - num2 << endl;
    cout << "The multiplication is " << num1 * num2 << endl;
    cout << "The division is " << num1 / num2 << endl;
    // https://www.w3schools.com/cpp//cpp_type_casting.asp
    // explicit typecasting
    result = (float)num1 / num2;
    cout << "The result is " << result << endl;
    cout << "/**Thanks for using**/";

    system("pause");
    return 0;
}