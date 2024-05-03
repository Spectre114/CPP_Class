#include <iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) // Input of array
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) // Output of array
    {
        cout << arr[i];
    }
}