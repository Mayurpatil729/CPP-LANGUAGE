
// Date

#include <iostream>
using namespace std;

class Hero
{
public:
    int health; //* Access specifiers : by default it is privated , it is only access in class
    char level;

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
};

int main()
{
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
    return 0;

    // coded by Mayur
}
