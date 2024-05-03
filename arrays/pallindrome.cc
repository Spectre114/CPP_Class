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
    int indicator = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            indicator = 1;
            break;
        }
    }
    if (indicator == 1)
    {
        cout << "The number is not pallindrome";
    }
    else
    {
        cout << "The number is pallindrome";
    }
}