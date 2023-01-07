#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout << "Program for finding greatest of two numbers";
    cout << "\n\tEnter the fist number = ";
    cin >> n1;
    cout << "\n\tEnter the second number =";
    cin >> n2;

    if (n1 == n2)
        cout << "\n\t Both numbers are same ";
    else if (n1 > n2)
        cout << "\n\t First number is greater than second";
    else
        cout << "\n\t Second number is greater than first ";

    return 0;

    // coded by Mayur
}
