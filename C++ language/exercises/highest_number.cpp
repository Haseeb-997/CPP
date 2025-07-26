#include <iostream>
using namespace std;

int main()
{
    int numbers[8] = {18, 11, 24, 40, 32, 29, -15, 30};
    int i, n; 
    n = sizeof(numbers) / sizeof(numbers[0]);
    int highest_number = numbers[0];
    for (i = 1; i < n; i++)
    {
        if (highest_number < numbers[i])
        {
            highest_number = numbers[i];
        }
    }
    cout << "The highest number is " << highest_number <<endl;

    system ("pause");
    return 0;
}