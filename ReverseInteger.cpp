//Implementation of reversing a number 
#include<iostream>
using namespace std;
int main()
{
    int number, last=0, reverse =0, temp=0;
    cout<<"Enter the number :";
    cin>>number;

    temp = number;

    while(temp!=0)
    {
        last = temp%10;
        reverse = reverse*10 +last;
        temp = temp/10;
    }

    cout<<"The reverse of "<<number<<" is : "<<reverse;
}