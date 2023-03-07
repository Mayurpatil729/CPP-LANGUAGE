// Date

#include <iostream>
using namespace std;

int main()
{
    cout << "Program to check given number is divisible by 5 and 11";
    cout << "\n\t Enter any number =";
    int num;
    cin >> num;

    if (num % 5 == 0 && num % 11 == 0)
        cout << "\n\t given number is divisible ";
    else
        cout << "\n\t given number is not divisible";

    return 0;

    // coded by Mayur
}
