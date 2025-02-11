// Hierarchical : one class serve as parent class for more than 1 class.
// In hierarchical inheritance, one class is a base class for more than one derived
// class.

// Date :

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Inside Function 1" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Inside function 2" << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "Inside Function 3" << endl;
    }
};

int main()
{
    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();

    return 0;

    // coded by Mayur
}
