#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for (int i = 1; i <= n; i++)
    {
        vp.push_back({i, i * i});
    }
    for (int i = 0; i < n; i++)
    {
        cout << vp[i].first << ' ' << vp[i].second << endl;
    }
}