// Date

#include <iostream>
using namespace std;

int main()
{
    int sp, pp;
    cout << "Program to check profit and loss";
    cout << "\n\t Enter the selling price = ";
    cin >> sp;
    cout << "\n\t Enter the purchase price = ";
    cin >> pp;

    if (sp == pp)
        cout << "\n\t Niether profit nor loss ";
    else if (sp > pp)
        cout << "\n\t profit";
    else
        cout << "\n\t loss";
    return 0;

    // coded by Mayur
}
