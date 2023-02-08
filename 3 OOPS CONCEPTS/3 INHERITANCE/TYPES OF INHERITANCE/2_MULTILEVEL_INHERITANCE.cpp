// A==>B==>C==>D

//  When a class inherits from a derived class, and the derived class becomes
//  the base class of the new class, it is called multilevel inheritance.
//  In multilevel inheritance, there is more than one level.

//  Date :

#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
};

class Germanshepherd : public Dog
{
};

int main()
{
    Germanshepherd g;
    g.speak();

    return 0;

    // coded by Mayur
}










