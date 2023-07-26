// Date

#include <iostream>
using namespace std;

int fno, sno;
int main()
{

    cout << "\nProgram for swaping 2 numbers : ";
    cout << "\nBefore swaping numbers are : ";

    cout << "\nEnter the first number : ";
    cin >> fno;
    cout << "\nEnter the second number : ";
    cin >> sno;

    fno = fno + sno;
    sno = fno - sno;
    fno = fno - sno;

    cout << "\nAfter swaping numbers are :";
    cout << "\nfirst number  : " << fno;
    cout << "\nsecond number : " << sno;

    return 0;

}

// coded by Mayur














