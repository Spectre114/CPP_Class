#include <iostream>
using namespace std;
int findSum(int arr[], int n)
{
    if (n == 0)
        return arr[n];
    return findSum(arr, n - 1);
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
    cout << "Sum: " << findSum(arr, n - 1);
}