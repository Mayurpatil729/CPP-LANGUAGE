// Date :

#include <bits/stdc++.h>
using namespace std;

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;
    }

    void operator()()
    {
        cout << "Bracket is here" << this->a << endl;
    }
};

int main()
{
    B obj1, obj2;
    // obj.a=1;
    // obj.b=2;
    // cout<<obj.add()<<endl;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();

    return 0;

    // coded by Mayur
}
