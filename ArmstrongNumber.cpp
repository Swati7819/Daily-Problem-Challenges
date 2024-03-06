//Implementation of Armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number=0, digit=0, temp=0,  last=0;
    float answer =0;
    cout<<"Enter the number : ";
    cin>>number;
    
    temp = number;
    //counting digit
    while(temp!=0)
    {
        digit++;
        temp= temp/10;
    }

    //logic
    temp = number;

    while(temp!=0)
    {
       last = temp%10;
       answer += pow(last, digit);
       temp= temp/10;
    }

    cout<<answer<<endl;
    cout<<number<<endl;
    if(answer==number)
    {
        cout<<number<<" is a armstrong number";
    }
    else
    {
        cout<<number<<" is not a armstrong number";
    }

   

}