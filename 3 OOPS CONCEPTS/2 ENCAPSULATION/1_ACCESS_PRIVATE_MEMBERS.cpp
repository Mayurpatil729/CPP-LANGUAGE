// Date :
//* Encapsulation  : wraping of data or data hiding from the user
//*                   and also increased the security

//! to access private attribute use get and set

#include <iostream>
using namespace std;

class employee
{
private:
    // private attribute
    int salary;

public:
    // setter
    void setsalary(int s)
    {
        salary = s;
    }

    // Getter
    int getsalary()
    {
        return salary;
    }
};

int main()
{
    employee myobj;
    myobj.setsalary(50000);
    cout << myobj.getsalary();
    return 0;
    // coded by Mayur
}
