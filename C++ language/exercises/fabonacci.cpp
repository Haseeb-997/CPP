#include <iostream>
using namespace std;

int main()
{
    cout << "***Fabonacci Series***" << endl;
    int F1, F2, F3, N;
    cout << "Enter the number of terms (must be greater than or equal to 2) you want in fabonacci series: ";
    cin >> N;
    if (N < 2)
    {
        cout << "Invalid Number" << endl;
    }
    else
    {
        F1 = 0, F2 = 1;
        cout << F1 << " " << F2 << " ";
        for (int i = 3; i <= N; i++)
        {
            F3 = F2 + F1;
            cout << F3 << " ";
            F1 = F2;
            F2 = F3;
        }
        cout << "\nThis is the required fanbonacci series\n";
    }
    
    system("pause");
    return 0;
}