#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "*****Even Odd Numbers*****" << endl;
    cout << "Enter the number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "This is an Even Number" << endl;
    }
    else
    {
        cout << "This is an Odd Number" << endl;
    }

    system("pause");
    return 0;
}