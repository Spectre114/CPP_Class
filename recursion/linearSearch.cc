#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target)
{
    if (n < 0)
        return -1;
    if (arr[n] == target)
        return n;
    return linearSearch(arr, n - 1, target);
}
main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cout << "Enter the target to search: ";
    cin >> target;
    cout << "Index: " << linearSearch(arr, n - 1, target);
}