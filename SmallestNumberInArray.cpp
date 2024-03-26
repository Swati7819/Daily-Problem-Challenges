//To find the smallest element in a given array
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n , smallest;
    cout<<"Enter the number of element in a array [max 100]: ";
    cin>>n;

    cout<<"Enter the array element : ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    smallest = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        smallest= arr[i];
    }

    cout<<"The smallest element in the array is : "<<smallest;


    }