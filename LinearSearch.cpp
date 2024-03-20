//linear search
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, find, index, flag=0;
    cout<<"Enter the number of element : ";
    cin>>n;

    if(n>100)
    {
        cout<<"Maximum limit exceeded !!.. Aborting..";
    }
    else
    {
        cout<<"Enter the array element : "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        cout<<"Enter the array element to search for : ";
        cin>>find;

        for(int i=0;i<n;i++)
        {
            if(arr[i]==find)
            {
                 index=i;
                 flag=1;
                 break;
            }
        }
        if(flag==1)
        cout<<"Element found at index : "<<index;
        else
        cout<<"Not found !!";
    }
}