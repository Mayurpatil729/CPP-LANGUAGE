// Date

#include <iostream>
#include <cstdlib> // ! header file
using namespace std;

int main()
{
    cout << rand(); // ! Generate a random numbers.
    int time = 0;
    srand(98);

    for (int x = 1; x <= 10; x++)
    {
        cout << 1 + (rand() % 6) << endl;
    }

    return 0;

    // coded by Mayur
}
