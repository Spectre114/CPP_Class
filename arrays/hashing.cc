// Division Reminder Hash Function
#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        arr[i] = -1;
    int n;
    cout << "Enter the number of values: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x % 10] = x;
    }
    int toSearch;
    cout << "Enter the value to access: ";
    cin >> toSearch;
    cout << "Exists: " << (arr[toSearch % 10] != -1);
}



