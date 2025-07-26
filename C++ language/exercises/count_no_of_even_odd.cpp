#include <iostream>
using namespace std;

int main()
{
    cout << "***Program that tell you the number of even and odd numbers in an array***\n";
    int n;
    cout << "Enter the number of items(numbers) you want to store in an array: ";
    cin >> n;
    int numbers[n];
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> numbers[i];
    }    
    
    for (int j = 0; j < length; j++)
    {
        if (numbers[j] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << endl;
    cout << "Even numbers : " << even << "\t\t" << "Odd numbers : " << odd << endl;

    system("pause");
    return 0;
}