#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cout << "/**Tables from 1 to 10**/" << endl;
    cout << "Enter the number: ";
    cin >> i;
    /* while(condition)
    {
        C++ statements;
    } */
    if ((i > 0) && (i <= 10))
    {
        int a = 1;
        while (a <= 10)
        {
            j = i * a;
            cout << i << " * " << a << " = " << j << endl;
            a++;
        }
    }
    else
    {
        cout << "Invalid Number" << endl;
    }

    system("pause");
    return 0;
}