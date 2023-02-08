// Ambiguity :
// There may be a possibility that a class may inherit member functions with the same name from two or more
// base classes. and the derived class may not have functions with the same name as those of its base classes. If
// the derived class object needs to access one of the same-named member functions of the base classes. it
// results in ambiguity as it is not clear to the compiler which base's class member function should be invoked.

// Date :

#include<bits/stdc++.h>
using namespace std;

class A{
    public:

    void func(){
        cout<<"I am A "<<endl;
    }
};

class B{
    public:

    void func(){
        cout<<"I am B "<<endl;

    }
};

class C:public A,public B{

};


int main()
{
    C obj;
    //obj.func();//ambuiguity error without scope resolution operator

    obj.A::func();
    obj.B::func();
    return 0;

// coded by Mayur
}























