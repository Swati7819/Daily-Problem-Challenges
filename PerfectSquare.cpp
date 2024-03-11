//Check if a number is a perfect square or not
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float number;
    float cvalue,square;;
    cout<<"Enter the number : ";
    cin>>number;

    square = sqrt(number);
    cvalue = ceil(square);
    
    if(square == cvalue){
        cout<<number<<" is a perfect square";
    }
    else
    {
        cout<<number<<" is not a perfect square";
    }
}