// DATE :

#include <iostream>
using namespace std;

int main()
{
    int arr[100], i, n, found = 0, first, last, mid, key;
    cout << "\nEnter the size of the array : ";
    cin >> n;

    cout << "\nEnter the " << n << " elements : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nEnter the elment to search : ";
    cin >> key;

    first = 0;
    last = n - 1;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (key == arr[mid])
        {
            found = 1;
            break;
        }

        if (key < arr[mid])
            last = mid - 1;

        if (key > arr[mid])
            first = mid + 1;
    }

    if (found == 1)
        cout << "\n Element" << key << " is located at the" << mid + 1 << " location ";
    else
        cout << "\n Element does not found in the array ";

    return 0;
}
