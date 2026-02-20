#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    bool sorted = true;

    cout << "Enter 5 elements:" << endl;
    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    for(int i = 0; i < 4; i++)
    {
        if(arr[i] > arr[i+1])
        {
            sorted = false;
            break;
        }
    }

    if(sorted)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;

    return 0;
}