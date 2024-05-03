#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    char c;
    cout << "Enter a character to count: ";
    cin >> c;
    int freq = 0;
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (c == str[i])
            freq++;
    }
    cout << c << " appears-> " << freq << " times " << endl;
}