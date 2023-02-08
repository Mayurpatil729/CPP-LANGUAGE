// ! you can also add parameters.

// Date :

#include <iostream>
using namespace std;

class car
{
public:
    int speed(int maxspeed);
};

int car::speed(int maxspeed)
{
    return maxspeed;
}

int main()
{

    car myobj;                // create an object of car
    cout << myobj.speed(200); // call the method with an argument

    return 0;
    // coded by Mayur
}
