#include <iostream>
using namespace std;

int main()
{
    float percent;
    cout << "*****Welcome to the FBISE Grading System*****\n";
    cout << "Enter your percentage: ";
    cin >> percent;
    if ((percent >= 95) && (percent <= 100)) // 95 to 100
    {
        cout << "Your Grade is A++" << endl;
    }
    else if ((percent >= 90) && (percent <= 94)) // 90 to 94
    {
        cout << "Your Grade is A+" << endl;
    }
    else if ((percent >= 85) && (percent <= 89)) // 85 to 89
    {
        cout << "Your Grade is A" << endl;
    }
    else if ((percent >= 80) && (percent <= 84)) // 80 to 84
    {
        cout << "Your Grade is B++" << endl;
    }
    else if ((percent >= 75) && (percent <= 79)) // 75 to 79
    {
        cout << "Your Grade is B+" << endl;
    }
    else if ((percent >= 70) && (percent <= 74)) // 70 to 74
    {
        cout << "Your Grade is B" << endl;
    }
    else if ((percent >= 60) && (percent <= 69)) // 60 to 69
    {
        cout << "Your Grade is C" << endl;
    }
    else if ((percent >= 50) && (percent <= 59)) // 50 to 59
    {
        cout << "Your Grade is D" << endl;
    }
    else if ((percent >= 40) && (percent <= 49)) // 40 to 49
    {
        cout << "Your Grade is E" << endl;
    }
    else if ((percent >= 0) && (percent <= 39)) // 0 to 39
    {
        cout << "Your Grade is U" << endl;
    }
    else
    {
        cout << "Invalid Percentage" << endl;
    }

    system("pause");
    return 0;
}