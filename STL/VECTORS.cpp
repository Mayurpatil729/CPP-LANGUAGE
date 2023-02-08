
// Date :

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()

{

    vector<int> v;
    // vector<int> p;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> p(5, 100);
    
    // vector<int> p(5);

    // vector<int> v1(5, 20);
    // vector<int> v2(v1);

    // vector<int>::iterator it = v.begin();
    // it++;
    // cout << *(it) << " ";

    return 0;
    // coded by Mayur
}

// array are contanst after defining the size
// vectors are dynamic in nature

//
