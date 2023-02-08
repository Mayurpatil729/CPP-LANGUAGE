
// Date

#include <iostream>
using namespace std;

class Hero
{
private:
    int health; //* Access specifiers : by default it is privated , it is only access in class
    char level;

    Hero()
    {
        cout << "Constructor Called ";
    }

public:
    char getlevel() //! getter
    {
        return level;
    }

    int gethealth()
    {
        return health;
    }

    void setlevel(char ch) //! setter
    {
        level = ch;
        // return level;
    }

    void sethealth(int h)
    {
        health = h;
        // return health;
    }

    // Paramerterised Constructor
    Hero(int health)
    {
        cout << "this -->" << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        cout << "this -->" << this << endl;
        this->level = level;
        this->health = health;
    }

    void print()
    {
        cout << level << endl;
    }
};

int main()
{

    // Paramerterised Constructor
    Hero ramesh(10);
    cout << "Address of ramesh " << &ramesh << endl;
    ramesh.gethealth();
    ramesh.print();

    Hero temp(23, 'B');
    temp.print();

    /*

        // object created statically
        cout << "HI" << endl;
        Hero ramesh;
        cout << "\nHello " << endl;

        // object created dynamically
        Hero *h = new Hero(); // Hero
    */

    /*
    //* creation oƒ object
    //! statically

    Hero a;
    a.sethealth(100);
    a.setlevel('M');
    cout << "level: " << a.level << endl;
    cout << "health : " << a.gethealth() << endl;

    //! dyanamically

    Hero *b = new Hero;
    b->setlevel('a');
    b->sethealth(39);
    cout << "level: " << (*b).level << endl;
    cout << "health : " << (*b).gethealth() << endl;

    cout << "level: " << b->level << endl;
    cout << "health : " << b->gethealth() << endl;
    */

    return 0;

    // coded by Mayur
}
