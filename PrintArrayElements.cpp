//To take user input and print the array elements
#include <iostream>
using namespace std;
int main()
{
    int a[10], n;
    cout << "Enter the number of array element [1- 10] : ";
    cin >> n;

    cout << "Enter the array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    cout << "The array element are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }