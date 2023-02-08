// Date :

//* inheritance : to inherit attributes and methods from one class to another
//*               or to achieve reusability.
//* to inherit use the : symbol
//* when : == reuse the attributes and methods of an exiting classs when you creat a new class.

#include <iostream>
using namespace std;


//Base class 
class vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Tuut,tuut!";
    }
};


// derived class
// class child_class : access_modifier parent_class
    class car : public vehicle
    {
    public:
        string model = "Mustang";
    };

    int main()
    {

        car mycar;
        mycar.honk();
        cout << mycar.brand + " " + mycar.model;

        return 0;
        // coded by Mayur
    }
















