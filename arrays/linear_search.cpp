#include <iostream>
using namespace std;

int main()
{
    int arr[5], key;
    bool found = false;

    cout << "Enter 5 elements:" << endl;
    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Element not found" << endl;

    return 0;
}