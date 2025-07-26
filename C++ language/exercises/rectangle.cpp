#include <iostream>
using namespace std;

int main()
{
    cout << "***Rectangle***\n";
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    if ((rows == 0) || (cols == 0))
    {
        cout << "Invalid Numbers" << endl;
    }
    else
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= cols; j++)
            {
                cout << "*" << " ";
            }
            cout << endl;
        }
    }

    system("pause");
    return 0;
}