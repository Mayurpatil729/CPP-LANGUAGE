
// Date

#include <iostream>
using namespace std;
// #include"Myclass"

// !  Access specifiers/Modifiers
// !  1] public  :In class as well as outside the class.
// !  2] private :by default it is privated , it is only access in class.
// !  3] protected :It is also inacccessible outside the class but can be acccessed by subclass at that class.

class Hero
{
private:
    int health; //* Access specifiers : by default it is privated , it is only access in class
    char level;

public:
    int gethealth() //! getter
    {
        return health;
    }

    char getlevel()
    {
        return level;
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
    Hero ironman;
    cout << "ironman health is " << ironman.gethealth() << endl;
    // ironman.health = 1000;

    // ironman.level = 3;

    cout << "size : " << sizeof(Hero) << endl;
    cout << "size : " << sizeof(Hero) << endl;

    // cout << "Health : " << ironman.health << endl;
    //  cout << "level : " << ironman.level << endl;

    ironman.sethealth(65);
    ironman.setlevel('A');
    cout << "health: " << ironman.gethealth() << endl;
    cout << "level : " << ironman.getlevel() << endl;

    return 0;

    // coded by Mayur
}
