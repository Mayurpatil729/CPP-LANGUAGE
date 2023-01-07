
//* methods are functions belongs to the class
//* 2 ways to define function
//* 1 ] inside class function
//* 2 ]  outside class function

//* you can access methods like attributes using dot.

// ! inside class definition

// Date

// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// class Myclass // The class
// {
// public:             // Access specifier
//     void myMethod() // Method function defined inside the class
//     {
//         cout << "Hello wordld :" <<endl;
//     }
// };

// int main()
// {
//     cout << "inside classs definition" << endl;

//     Myclass myobj; // create an object of myclass

//     myobj.myMethod(); // call the method

//     return 0;
//     // coded by Mayur
// }

// ! outside class definition
// * Name of the class followed by the , scope resolution :: operator, followed by the name of the funtion.

#include <iostream>
// #include <bits/stdc++.h>

using namespace std;

class Myclass // The class
{
public:              // Access specifier
    void myMethod(); // Method function defined inside the class
};

void Myclass::myMethod()
{
    cout << "hello world";
}

int main()
{
    cout << "outside classs definition " << endl;

    Myclass myobj;    // create an object of myclass
    myobj.myMethod(); // call the method

    return 0;
    // coded by Mayur
}