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

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        int temp = arr[i];
        while (temp != 0)
        {
            int rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        cout << sum << " ";
    }
}