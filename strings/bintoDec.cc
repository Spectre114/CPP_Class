// bnary to decimal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int res = 0;
    int n = str.size();
    // int index = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            res += pow(2, n - i - 1);
        }
    }
    cout << res;
}