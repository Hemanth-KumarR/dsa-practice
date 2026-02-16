#include<iostream>
using namespace std;
int main()
{
   int arr[10];
   cout<<"Enter 10 elements of the array: ";
   for(int i = 0; i < 10; i++)
   {
       cin>>arr[i];
   }
   cout<<"Elements of the array are: ";
   for(int i = 0; i < 10; i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}