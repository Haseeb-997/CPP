#include <iostream>
using namespace std;

int main()
{
    cout << "****Right and Left align triangles(descending order)****\n";
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // Left align triangle
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << endl;

    // Right align triangle
    for (int k = n; k >= 1; k--)
    {
        for (int l = 0; l < n - k; l++)
        {
            cout << "   ";
        }
        for (int l = 1; l <= k; l++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
