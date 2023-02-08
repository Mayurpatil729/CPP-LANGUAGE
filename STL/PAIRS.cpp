// Date :

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    pair<int, int> p = {1, 3};
    cout << p.first << "  " << p.second;

    cout << "\n";

    pair<int, pair<int, int>> a = {1, {3, 4}};
    cout << p.first << "  " << a.second.second << "  " << a.second.first;

    cout << "\n";

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << " " << arr[2].second;

    return 0;

    // coded by Mayur
}

// pairs ==> to storing two variable


















