#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    cout << "Enter five numbers\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> numbers[i];
    }
    cout << "Following is the array formed by given numbers" << endl;
    cout << "numbers[5] = {" << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << ", " << numbers[3] << ", " << numbers[4] << "}" << endl;

    system("pause");
    return 0;
}