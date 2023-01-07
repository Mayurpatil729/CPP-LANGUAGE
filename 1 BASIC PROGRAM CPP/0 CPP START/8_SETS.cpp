// Date

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> s1 = {'c', 'a', 'b', 'd'};

    s1.insert('e');
    s1.erase('c');

    if (s1.find('c') == s1.end())
    {
        cout << "could not find c" << endl;
    }
    else
    {
        cout << "Found C!" << endl;
    }

    for (auto itr = s1.begin(); itr != s1.end(); ++itr)
    {
        cout << *itr << endl;
    }
    return 0;

    // coded by Mayur
}
