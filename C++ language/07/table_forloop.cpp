#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cout << "/**Tables from 1 to 10**/" << endl;
    cout << "Enter the number: ";
    cin >> i;
    /* for(initialization; condition; updation)
    {
        loop body(C++ code);
    } */

    if ((i > 0) && (i <= 10))
    {
        for (int a = 1; a <= 10; a++)
        {
            j = i * a;
            cout << i << " * " << a << " = " << j << endl;
        }
    }
    else
    {
        cout << "Invalid Number" << endl;
    }

    system("pause");
    return 0;
}