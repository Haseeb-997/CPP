#include <iostream>
using namespace std;

int main()
{
    cout << "***Displaying Prime Numbers from 2 to a number***\n";
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            cout << i << " ";
        }
    }
    cout << "\nAbove are the Prime Numbers to " << n << endl;

    system("pause");
    return 0;
}