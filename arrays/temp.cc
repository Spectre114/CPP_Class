#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the values in the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = arr[0];
    for (int i = 1; i < n; i++)
    {
        x = x ^ arr[i];
    }
    cout << x;
}