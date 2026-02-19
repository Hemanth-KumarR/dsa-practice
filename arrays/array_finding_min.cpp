#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 elements:" << endl;

    // input
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // assume first element is minimum
    int min = arr[0];

    // compare remaining elements
    for(int i = 1; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    // output minimum
    cout << "Minimum element is: " << min << endl;

    return 0;
}
