#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;

    cout << "Enter 5 elements (numbers from 1 to 6, one missing):" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int n = 6;
    int total_sum = n * (n + 1) / 2;

    int missing = total_sum - sum;

    cout << "Missing number is: " << missing << endl;

    return 0;
}