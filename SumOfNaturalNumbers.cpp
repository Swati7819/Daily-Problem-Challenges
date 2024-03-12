//Implementation of sum of natural number
#include<iostream>
using namespace std;
int main()
{
    int number, sum=0, i=1;
    cout<<"Enter the number : ";
    cin>>number;

    while(i<=number)
    {
        sum+=i;
        i++;
    }

    cout<<"The sum of "<<number<<" numbers is : "<<sum;
}