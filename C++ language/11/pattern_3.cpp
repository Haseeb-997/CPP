#include <iostream>
using namespace std;

int main()
{
    cout << "****Pyramids****\n";
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // Ascending pyramid
    cout << "Ascending pyramid" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "   ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout <<endl;
    // Descending pyramid
    cout << "Descending pyramid" << endl;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
