#include <bits/stdc++.h>
using namespace std;
bool isChar(char c)
{
    return ((c >= 'A' && c < 'Z') || (c >= 'a' && c <= 'z'));
}
int main()
{
    string str;
    getline(cin, str);
    int n = str.size();
    int count = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (isChar(str[i]))
            count++;
        if (isChar(str[i]) && str[i - 1] == ' ')
            break;
    }
    cout << count;
}