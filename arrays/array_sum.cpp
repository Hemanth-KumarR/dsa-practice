#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int sum = 0;
    cout << "Enter 10 elements of array: ";
    for(int i=0; i<10; i++)
    {
        cin >> arr[i];   //input array elements
    }
    for(int i=0; i<10; i++)
    {
        sum += arr[i];  //add array elements to sum
    }
    cout << "Sum of array elements: " << sum << endl;   //print sum of array elements
    return 0;
}
