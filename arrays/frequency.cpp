#include <iostream>
using namespace std;

int main()
{
    int arr[5], key;
    int count = 0;

    cout << "Enter 5 elements:" << endl;
    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Enter element to count: ";
    cin >> key;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == key)
            count++;
    }

    cout << "Frequency of element is: " << count << endl;

    return 0;
}