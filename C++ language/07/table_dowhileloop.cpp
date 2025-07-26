#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cout << "/**Tables from 1 to 10**/" << endl;
    cout << "Enter the number: ";
    cin >> i;
    /*
    Syntax:
     do
    {
        C++ statements;
    } while(condition);
    */
    if ((i > 0) && (i <= 10))
    {
        int a = 1;
        do
        {
            j = i * a;
            cout << i << " * " << a << " = " << j << endl;
            a++;
        } while (a <= 10);
    }
    else
    {
        cout << "Invalid Number" << endl;
    }

    system("pause");
    return 0;
}