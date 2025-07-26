#include <iostream>
using namespace std;

int main()
{
    cout << "****Right and Left align triangles(ascending order)****\n";
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // Left align triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << endl;

    // Right align triangle
    for (int k = 1; k <= n; k++)
    {
        for (int l = n - k; l > 0; l--)
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
