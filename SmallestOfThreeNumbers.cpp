//To find the smallest of three numbers
#include<iostream>
using namespace std;
int main()
{
    int num1=0, num2=0, num3=0, smallest;
    cout<<"Enter the first number : ";
    cin>>num1;

    cout<<"Enter the second number : ";
    cin>>num2;

    cout<<"Enter the third number : ";
    cin>>num3;

    smallest = num1<num2?(num1<num3? smallest=num1: smallest= num3):(num2<num3? smallest=num2: smallest=num3);

    cout<<"The smallest is : "<<smallest;


}