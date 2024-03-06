//Implementation of palindrome number
#include<iostream>
using namespace std;
int main()
{
    int number, reverse=0,last=0, answer=0;
    cout<<"Enter the number : ";
    cin>>number;

    //logic
    reverse= number;

    while(number!=0)
    {
          last = number%10;
          answer = answer*10+ last;
          number = number/10;

    }

    if(reverse==answer)
    {
        cout<<reverse<<" is a palindrome number";
    }
    else
    {
        cout<<reverse<<" is not a palindrome number";
    }
}