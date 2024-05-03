#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int freq[26] = {0};
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        freq[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            cout << char(i + 'a') << " - " << freq[i] << endl;
    }
}