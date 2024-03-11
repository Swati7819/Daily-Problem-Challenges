//Display even number from 1 to n
#include<iostream>
using namespace std;
int main()
{
    int number, i=2;
    cout<<"Enter the number : ";
    cin>>number;

    while(i<=number)
    {
        cout<<i<<" ";
        i=i+2;
    }

    
}