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
    int freq[26] = {0};
    for (int i = 0; i < n; i++) 
    {
        freq[arr[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            cout << char(i + 'a') << " - " << freq[i] << endl;
    }
}