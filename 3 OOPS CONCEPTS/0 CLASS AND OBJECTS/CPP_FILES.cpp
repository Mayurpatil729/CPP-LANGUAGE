// Date

#include <iostream>
#include <fstream>
using namespace std;

int main()
// {
//     // create and open a text file
//     ofstream Myfile("Fst.txt");

//     // write to the file
//     Myfile << "files can be tricky";

//     // close the file
//     Myfile.close();
//     return 0;

//     // coded by Mayur
// }

// Date

{
    string mytext;

    ifstream myreadfile("Fst.txt");

    // use a while loop together with the getline() function to read the file
    // line by line
    while (getline(myreadfile, mytext))
    {
        // output the text from the file
        cout << mytext << endl;
    }

    // close the file
    Myfile.close();

    return 0;
    // coded by Mayur
}
