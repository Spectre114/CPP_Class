#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    char arr[n];
    cout << "Enter the chars in the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag = 1;
            }
            for (int k = 0; k < n; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        if (flag == 0)
            break;
    }
}