// To copy one array element into another
#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10], n;
    cout << "Enter the number of array element [1- 10] : ";
    cin >> n;

    cout << "Enter the array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    cout << "The copied element are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}