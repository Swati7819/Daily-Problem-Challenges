//Implementation of factorial 
#include<iostream>
using namespace std;
int main()
{ 
    int number, fact=1;
    cout<<"Enter the number : ";
    cin>>number;

    int i=1;
    while(i<=number)
    {
        fact = fact*i;
        i++;
    }

    cout<<"The factorial of "<<number<<" is: "<<fact;

}