#include <iostream>
using namespace std;

int main()
{
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << txt.length() << endl;
    cout << txt[txt.length() - 1] << endl;
    cout << txt[15] << endl;
    // Concatenation
    string st1 = "Jhon";
    string st2 = "Don";
    string normal = st1 + " " + st2;
    string append = st1.append(st2);
    string tab;
    cout << normal << endl;
    cout << append << endl;
    cout << "With tab is: " << st1 << "\t" << st2 << endl;

    system("pause");
    return 0;
}