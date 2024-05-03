// Take input in an array and print only those values which are even.
#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the values in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
            cout << arr[i] << " ";
    }
}
