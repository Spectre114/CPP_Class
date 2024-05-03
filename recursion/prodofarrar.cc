// #include <iostream>
// using namespace std;
// int prod(int arr[], int n)
// {
//     if (n == 0)
//         return arr[n];
//     return arr[n] * prod(arr, n - 1);
// }
// main()
// {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "enter elements in the array: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     int ans = prod(arr, n);
// }
#include <iostream>
using namespace std;
int findProduct(int arr[], int i, int n)
{
    if (i == n - 1)
        return arr[i];
    return arr[i] * findProduct(arr, i + 1, n);
}
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
    cout << "Product:" << findProduct(arr, 0, n);
}
// Printing array in reverse using recurssion
// Printing array in original order using recurssion
// Binary Search Tree, Dynamic Programing, BackTracking