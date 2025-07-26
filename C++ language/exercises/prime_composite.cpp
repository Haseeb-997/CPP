#include <iostream>
using namespace std;

int main()
{
    cout << "***Prime and Composite Number Checker***\n";
    int n;
    int isPrime = 1;
    cout << "Enter the number: ";
    cin >> n;
    if (n <= 1)
    {
        cout << "The number is niether prime nor composite" << endl;
    }
    else
    {
        // for less iteration and fast result, we use i <= sqr(n)
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            cout << "This is a prime number" << endl;
        }
        else
        {
            cout << "This is a composite number" << endl;
        }
    }

    system("pause");
    return 0;
}