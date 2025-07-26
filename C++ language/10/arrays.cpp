#include <iostream>
using namespace std;

int main()
{
    // this is an array
    // cout << "cars" << endl;
    // string car[] = {"BMW", "Vitz", "Mustang", "Bughati"};
    // car[2] = "Cultus";
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << i << " = " << car[i] << endl;
    // }
    // cout << "\n";    
    // cout << "numbers" << endl;
    // int num[5] = {10, 20, 30, 40, 50};
    // cout << "2 = " << num[2] << endl;
    // cout << "\n";
    cout << "The size of string is " << sizeof(string) << " bytes\n";    
    cout << "Days" << endl;
    string day[4];
    day[0] = "Monday";
    day[1] = "Tuesday";
    day[2] = "Wednesday";
    day[3] = "Thursday";
    int length = sizeof(day) / sizeof(day[0]);
    for (int i = 3; i >= 0; i--)
    {
        cout << i << " = " << day[i] << endl;
    }
    cout << "\n";
    cout << sizeof(day) << endl;
    
    system("pause");
    return 0;
}