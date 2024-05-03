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
    int flag = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << i;
    else
        cout << -1;
}