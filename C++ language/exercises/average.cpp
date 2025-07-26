#include <iostream>
using namespace std;

int main()
{
    float avg, sum = 0;
    int ages[6] = {18, 11, 24, 40, 32, 29};
    int n = sizeof(ages) / sizeof(ages[0]);
    for (int i : ages){
        sum += i;
    }
    avg = sum / n;
    cout << "The average of ages is " << avg << endl;

    system ("pause");
    return 0;
}