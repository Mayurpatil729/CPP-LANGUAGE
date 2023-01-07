#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Program for finding greatest of two numbers";
    cout << "\n\tEnter the fist number = ";
    cin >> n1;
    cout << "\n\tEnter the second number =";
    cin >> n2;
    cout << "\n\tEnter the third number =";
    cin >> n3;

    if (n1 == n2 && n2 == n3)
        cout << "\n\t All numbers are same ";
    else if (n1 > n2 && n1 > n3)
        cout << "\n\t First number is greater";
    else if (n2 > n3 && n2 > n3)
        cout << "\n\t Second number is greater ";
    else
        cout << "\n\t third number is greater ";
        
    return 0;

    // coded by Mayur
}
