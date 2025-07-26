#include <iostream>
using namespace std;
int main()
{
    // 2. Selection control structure: Switch Case statements
    cout << "/**This is program number 10**/\n";
    int age;
    cout << "Enter your age: ";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are 18"<<endl;
        break;
    case 20:
        cout << "You are 20"<<endl;
        break;
    case 22:
        cout << "You are 22"<<endl;
        break;
    default:
        cout << "No special cases"<<endl;
        break;
    }

    system("pause");
    return 0;
}