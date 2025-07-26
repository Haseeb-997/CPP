#include <iostream>
using namespace std;
int main()
{
    float f = 13.56f;
    double l = 13.56l;
    cout << "The size of 13.56 is " << sizeof(13.56) << " bytes" << endl;
    cout << "The size of 13.56f is " << sizeof(13.56f) << " bytes" << endl;
    cout << "The size of 13.56F is " << sizeof(13.56F) << " bytes" << endl;
    cout << "The size of 13.56l is " << sizeof(13.56l) << " bytes" << endl;
    cout << "The size of 13.56L is " << sizeof(13.56L) << " bytes" << endl;
    system("pause");
    return 0;
}