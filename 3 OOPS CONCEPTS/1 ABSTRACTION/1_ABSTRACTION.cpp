
#include <iostream>
using namespace std;
class Abstraction
{
private:
    int a, b;

public:
    // method to set values of private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    Abstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}

// Output : a = 10 b = 20

