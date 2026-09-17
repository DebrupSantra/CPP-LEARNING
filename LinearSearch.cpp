#include <iostream>
using namespace std;

int main()
{
    int a[10], n, key;
    int found = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            cout << "Element found at position " << i + 1;
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << "Element not found";

    return 0;
}