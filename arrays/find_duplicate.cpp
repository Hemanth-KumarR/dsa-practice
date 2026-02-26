#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 elements:" << endl;

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << "Duplicate element is: " << arr[i] << endl;
                return 0;
            }
        }
    }

    cout << "No duplicate found" << endl;

    return 0;
}