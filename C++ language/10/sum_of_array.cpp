#include <iostream>
using namespace std;

int main()
{
    // Take 5 numbers in an array and print their sum
    int numbers[5];
    cout << "Enter five numbers\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> numbers[i];
    }
    int sum = 0;
    int length = sizeof(numbers) / sizeof(numbers[0]);
    cout << "The length of array is " << length << endl;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    cout << "The sum of numbers are " << sum << endl;

    system("pause");
    return 0;
}