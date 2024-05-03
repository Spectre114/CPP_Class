#include <iostream>
using namespace std;
int missingElement(int arr[], int n) // function declaration
{
    // function definition
    int sum = 0, sum1 = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i];
    }
    return sum - sum1;
}
int main()
{
    int n;
    cout << "Enter the range of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the values in the array:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int res = missingElement(arr, n); // function call
    cout << res;
}