#include <iostream>
using namespace std;
int main()
{
    // 1. Selection control structure: If else-if else ladder
    cout << "/**This is program number 10**/\n";
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if ((age > 0) && (age < 18))    // 0-17
    {
        cout << "You are under age.Your ID card can't be created"<<endl;
    }
    else if ( age >= 18 ) // 18 
    {
        cout << "Your ID card can be created"<<endl;
    }
    else
    {
        cout << "You are not exist in this world"<<endl;
    }
    
    system("pause");
    return 0;
}