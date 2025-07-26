#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 7; i++)
    {
        if (i == 4)
        {
            break; // break terminate the loop and get out of loop body
        }

        cout << i << endl;
    }

    for (int j = 0; j <= 7; j++)
    {
        if (j == 4)
        {
            continue; // terminate the loop for the current iteration and go to the next iteration
        }

        cout << j << endl;
    }

    system("pause");
    return 0;
}