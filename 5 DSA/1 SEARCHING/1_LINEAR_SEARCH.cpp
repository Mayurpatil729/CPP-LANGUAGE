// Date :

#include <iostream>
using namespace std;

int n, arr[100], i, key, found = 0;

int main()
{
    cout << "Program for linear search :";
    cout << "\nEnter the size of the array : ";
    cin >> n;

    cout << "\nEnter " << n << " elements  : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the element to be search : ";
    cin >> key;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "\n Element " << key << " is located at the " << i + 1 << " postion";
            found = 1;
            break;
        }
    }

    if (!found)
    {
        cout << "\n Element is not present in the given array ";
    }
    return 0;
    // coded by Mayur
}
