#include <iostream>
using namespace std;

class car
{
public:
    string brand;
    string model;
    int year;
};

int main()
{

    //  create an object of car
    car carobj1;
    carobj1.brand = "BMW";
    carobj1.model = "x5";
    carobj1.year = 1999;

    //  create an another object of car
    car carobj2;
    carobj2.brand = "Ford";
    carobj2.model = "Mustand";
    carobj2.year = 1969;

    // print attribute values
    cout << carobj1.brand << endl
         << carobj1.model << endl
         << carobj1.year << endl;
    cout << carobj2.brand << endl
         << carobj2.model << endl
         << carobj2.year << endl;

    return 0;
}



