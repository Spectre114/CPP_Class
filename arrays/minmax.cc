#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) // Input of array
    {
        cin >> arr[i];
    }
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }
    cout << "Minimum Element: " << min << "\nMaximum Element: " << max << endl;
}