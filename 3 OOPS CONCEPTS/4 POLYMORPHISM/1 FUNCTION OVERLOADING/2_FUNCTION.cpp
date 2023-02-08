// Date :

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello world !"<<endl;
    }


    void sayHello(string name){
        cout<<"Hello"<<name<<endl;
    }
};



int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello(" Coder");   //Function overloading

    return 0;

// coded by Mayur
}














