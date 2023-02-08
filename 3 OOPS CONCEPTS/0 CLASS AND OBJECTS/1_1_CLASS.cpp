
/*   to access the class attributes(mynum and mystring) use dot syntax
on the object */

// Date

#include <iostream>
using namespace std;


// class class_name
// {
//      --class body--
//      data_members
//      constructor (optional)
//      methods
// };


class Myclass // The class
{
public:              // Access specifier
    int mynum;       // Attribute (int)
    string mystring; // Attribute(string)
};

int main()
{
    cout << "To create an object\n";

    Myclass myobj;
    // create an object of Myclass
    // class_name objectName;

    // Syntax to create an object dynamically:
    // class_name * objectName = new class_name();

    // Access attributes and set values
    myobj.mynum = 729;
    myobj.mystring = "classes";

    // print attribute values

    cout << myobj.mynum << endl;
    cout << myobj.mystring << endl;

    return 0;
    // coded by Mayur
}
