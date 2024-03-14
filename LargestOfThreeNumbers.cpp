//To find the largest of three numbers
#include<iostream>
using namespace std;
int main()
{
    int num1=0, num2=0, num3=0, largest;
    cout<<"Enter the first number : ";
    cin>>num1;

    cout<<"Enter the second number : ";
    cin>>num2;

    cout<<"Enter the third number : ";
    cin>>num3;

    largest = num1>num2?(num1>num3? largest=num1: largest= num3):(num2>num3? largest=num2: largest=num3);

    cout<<"The largest is : "<<largest;


}