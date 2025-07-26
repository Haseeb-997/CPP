#include <iostream>
using namespace std;

int main()
{
    cout << "***The sum of numbers from one number to another****\n";
    int start, last, sum = 0;
    cout << "Enter the starting number: "; // 5
    cin >> start;
    cout << "Enter the ending number: "; // 1
    cin >> last;
    if (start > last)
    {
        int swap = start; // swap = 5
        start = last;     // start = 1
        last = swap;      // last = 5
    }
    // This is very time consuming
    // for (int i = start; i <= last; i++)
    // {
    //     sum = sum + i;
    // }
    // The alternate method is by using arithmatic formula
    int n; // n is number of terms
    n = (last - start) + 1;
    sum = ((start * n) + (last * n)) / 2;
    cout << "The sum of the numbers from " << start << " to " << last << " = " << sum << endl;

    system("pause");
    return 0;
}