#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int key;

    cout << "Enter 5 sorted elements:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0;
    int high = 4;
    int mid;
    bool found = false;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == false)
    {
        cout << "Element not found" << endl;
    }

    return 0;
}