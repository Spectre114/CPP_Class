#include <iostream>
using namespace std;
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
    int target;
    cout << "Enter the target to search: ";
    cin >> target;
    int low = 0;
    int high = n - 1;
    int flag = 0;
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            flag = 1;
            break;
        }
        else if (target < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (flag == 1)
        cout << "Element found at: " << mid;
    else
        cout << -1;
}