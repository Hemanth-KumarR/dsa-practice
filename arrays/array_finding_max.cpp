#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 elements:" << endl;

    // input array
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // assume first element is maximum
    int max = arr[0];

    // compare remaining elements
    for(int i = 1; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    // print maximum element
    cout << "Maximum element is: " << max << endl;

    return 0;
}
