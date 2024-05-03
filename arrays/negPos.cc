#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the values in the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Two Pointer - DSA
    int i = 0, j = 1;
    while (i < n && j < n)
    {
        if (arr[j] < 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else
            j++;
    }
    // Bubble Sort, Insertion sort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int flag = 0;
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if (arr[j + 1] < 0 && arr[j] >= 0)
    //         {
    //             swap(arr[j], arr[j + 1]);
    //             flag = 1;
    //         }
    //     }
    //     if (flag)
    //         break;
    // }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
