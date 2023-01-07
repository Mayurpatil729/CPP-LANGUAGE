// Date
/*
#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int &b = a;
    int &c = b;

    b = 6;
    a = 5;
    c = 2;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << &a << endl;
    cout << &b<< endl;
    cout << &c << endl;

    return 0;

    // coded by Mayur
}
*/

// Date

/*
#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    cout << &a << endl;

    return 0;

    // coded by Mayur
}

*/

// Date

#include <iostream>
using namespace std;

int main()
{
    bool x = true;
    bool &y = x; // reference is aliasing a variable

    cout << &x << endl;
    cout << &y << endl;

    return 0;

    // coded by Mayur
}
