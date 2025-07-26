#include <iostream>
using namespace std;

int main()
{
    cout << "***Factorial Calculator***\n";
    int n, fact = 1;
    cout << "Enter the number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Invalid Number" << endl;
    }
    else
    {
        for (int i = n; i > 1; i--)
        {
            fact = fact * i;
        }
        cout << "The factorial of " << n << " is " << fact << endl;
    }

    system("pause");
    return 0;
}