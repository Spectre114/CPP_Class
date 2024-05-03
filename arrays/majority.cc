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
    int vote = 1;
    int winner = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == winner)
            vote++;
        else
            vote--;
        if (vote == 0)
        {
            winner = arr[i];
            vote = 1;
        }
    }
    cout << winner;

    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //             count++;
    //     }
    //     if (count > n / 2)
    //     {
    //         cout << arr[i];
    //         break;
    //     }
    // }
}