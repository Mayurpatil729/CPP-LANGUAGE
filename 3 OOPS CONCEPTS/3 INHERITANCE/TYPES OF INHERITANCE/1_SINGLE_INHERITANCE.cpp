// Date :

// In single inheritance, one class can extend the functionality
// of another class. There is only one parent class and one child
// class in single inheritances.

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

int main()
{
    Dog d;
    d.speak();
    cout << d.age << endl;
    return 0;

    // coded by Mayur
}
