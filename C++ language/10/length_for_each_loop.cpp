#include <iostream>
using namespace std;

int main()
{
    int numbers[4] = {0, 36, 45, 50};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    cout << "The no. of items in numbers array are " << length << endl;
    // for each loop
    for (int i : numbers)
    {
        cout << i << endl;
    }

    system("pause");
    return 0;
}