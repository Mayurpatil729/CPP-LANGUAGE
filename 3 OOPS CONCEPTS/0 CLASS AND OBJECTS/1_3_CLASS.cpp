// Date

#include <iostream>
using namespace std;
// #include"Myclass"

class Myclass
{
    // empty
};

int main()
{
    Myclass obj, obj1;
    cout << "size of object: " << sizeof(obj) << endl;
    cout << "size of object: " << sizeof(obj1) << endl;

    cout << "size of empty  class : " << sizeof(Myclass) << endl;
    return 0;

    // coded by Mayur
}

// Size of empty class is : 1 byte
