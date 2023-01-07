
/*   to access the class attributes(mynum and mystring) use dot syntax
on the object */

// Date

#include <iostream>
using namespace std;

class Myclass // The class
{
public:              // Access specifier
    int mynum;       // Attribute (int)
    string mystring; // Attribute(string)
};

int main()
{
    cout << "To create an object";

    Myclass myobj; // create an object of Myclass

    // Access attributes and set values
    myobj.mynum = 15;
    myobj.mystring = "classes";

    // print attribute values

    cout << myobj.mynum << endl;
    cout << myobj.mystring << endl;
    return 0;
    // coded by Mayur
}
