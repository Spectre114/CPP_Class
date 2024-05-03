#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // int x = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     x = x ^ arr[i];
    // }
    // cout << x;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
            if (count == 2)
                break;
        }
        if (count == 1)
        {
            cout << arr[i];
            break;
        }
    }
}