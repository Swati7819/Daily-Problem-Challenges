//Implementation of prime number
#include<iostream>
using namespace std;
int main()
{
    int number, i=2, flag=0;
    cout<<"Enter the number : ";
    cin>>number;
    
    if(number<=1)
    {
        cout<<number<<" is not a prime number";
    }
    else{
    while(i<number)
    {
        if(number%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }

    if(flag==0)
    {
        cout<<number<<" is a prime number";
    }
    else{
        cout<<number<<" is not a prime number";
    }
    }
}