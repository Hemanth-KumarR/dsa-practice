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

    // Selection Sort
    for(int i = 0; i < 4; i++)
    {
        int min_index = i;

        for(int j = i + 1; j < 5; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        // swap
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    cout << "Sorted array:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}