#include <bits/stdc++.h>
using namespace std;
pair<string, int> LCS(string str, string sub, vector<vector<int>> dp)
{
    int m = str.size();
    int n = sub.size();
    string subSeq;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str[j - 1] == sub[i - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return {subSeq, dp[n][m]};
}
int main()
{
    string str, sub;
    cin >> str >> sub;
    int m = str.size();
    int n = sub.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    pair<string, int> res = LCS(str, sub, dp);
    cout << res.first << " " << res.second << endl;
}