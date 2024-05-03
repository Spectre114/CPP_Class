#include <iostream>
using namespace std;
void findFrequency(char arr[], int freq[], int n)
{
    for (int i = 0; i < n; i++)
    {
        freq[arr[i] - 'a']++;
    }
}
int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    char arr[n];
    cout << "Enter the chars in the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int freq[26] = {0};
    findFrequency(arr, freq, n);
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            cout << char(i + 'a') << "->" << freq[i] << endl;
    }
}