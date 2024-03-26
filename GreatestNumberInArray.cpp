//To find the greatest element in a given array
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n , greatest;
    cout<<"Enter the number of element in a array [max 100]: ";
    cin>>n;

    cout<<"Enter the array element : ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    greatest= arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>greatest)
        greatest= arr[i];
    }

    cout<<"The greatest element in the array is : "<<greatest;


    }