// Date

#include <iostream>
#include <tuple> //  For tuple like an array
using namespace std;

int main()
{
    tuple<int, string> person(20, "mayur");
    cout << get<0>(person) << endl;
    cout << get<1>(person) << endl;
    get<1>(person) = "patil";
    cout << get<1>(person) << endl;

    tuple<int, char, bool, float> thing;
    thing = make_tuple(20, 'h', true, 2.3);
    cout << get<0>(thing) << endl;
    cout << get<1>(thing) << endl;
    cout << get<2>(thing) << endl;
    cout << get<3>(thing) << endl;

    tuple<int, int> t1 = make_tuple(1, 2);
    tuple<int, int> t2 = make_tuple(3, 4);
    t1.swap(t2);
    auto t3 = tuple_cat(t1, t2);

    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl;

    cout << get<0>(t3) << endl;
    cout << get<1>(t3) << endl;
    cout << get<2>(t3) << endl;
    cout << get<3>(t3) << endl;

    return 0;

    // coded by Mayur
}
