#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string res;
    res.push_back(str[0]);
    int n = str.size();
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
            continue;
        res.push_back(str[i]);
    }
    cout << res;
}