// Date

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "\n\tProgram to check given year is leap year or not ";
    cout << "\n\tEnter any year = ";
    cin >> year;

    if (year % 4 == 0)
        cout << "\n\t Given year is leap year";
    else
        cout << "\n\t Given year is not leap year";
    return 0;

    // coded by Mayur
}
