//Implementation of fibonacci series 
#include<iostream>
using namespace std;
int main()
{
    int t1 = 0, t2= 1, t3, number;
    cout<<"Enter the number of terms in fibonacci series : ";
    cin>>number;
     
    cout<<"The fibonacci series is as follows : "<<endl;
    if(number==1)
   { cout<<t1;}

    else if(number==2)
   { cout<<t1<<" "<<t2;}

   else {

    cout<<t1<<" "<<t2<<" ";
    while(number-2 !=0)
    {
        t3= t1+t2;
        cout<<t3<<" ";
        t1= t2;
        t2= t3;
        number--;
    }
   }



}