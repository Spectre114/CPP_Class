// Take input in an array from user and find the sum of all the numbers in the array
// Input - 5
// 1 2 3 4 5
// Output- 15
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the values in the array:";
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}