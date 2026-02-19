#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 elements:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int second_max = arr[0];

    // find maximum
    for(int i = 1; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    // find second maximum
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > second_max && arr[i] < max)
        {
            second_max = arr[i];
        }
    }

    cout << "Second largest element is: " << second_max << endl;

    return 0;
}
