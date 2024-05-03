#include <bits/stdc++.h>
using namespace std;
pair<string, int> LCS(string str, string sub, vector<vector<int>> matrix)
{
    int m = str.size();
    int n = sub.size();
    string subSeq;
    int prev = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (sub[i - 1] == str[j - 1])
            {
                matrix[i][j] = 1 + matrix[i - 1][j - 1];
                if ((matrix[i][j] - 1) == prev)
                {
                    subSeq += str[j - 1];
                    prev = matrix[i][j];
                }
            }
            else
                matrix[i][j] = max(matrix[i - 1][j], matrix[i][j - 1]);
        }
    }
    return {subSeq, matrix[n][m]};
}
int main()
{
    string str, sub;
    cout << "Enter the two strings: ";
    cin >> str >> sub;
    int m = str.size();
    int n = sub.size();
    vector<vector<int>> matrix(n + 1, vector<int>(m + 1, 0));
    pair<string, int> subSeq = LCS(str, sub, matrix);
    cout << subSeq.first << " " << subSeq.second;
}