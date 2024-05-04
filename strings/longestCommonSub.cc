#include <bits/stdc++.h>
using namespace std;
pair<string, int> LCS(string str, string sub, vector<vector<int>> &matrix)
{
    int m = str.size();
    string subSeq = "";
    // int prev = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (sub[i - 1] == str[j - 1])
            {
                matrix[i][j] = 1 + matrix[i - 1][j - 1];
                // if ((matrix[i][j] - 1) == prev)
                // {
                //     subSeq += sub[j - 1];
                //     prev = matrix[i][j];
                // }
            }
            else
                matrix[i][j] = max(matrix[i - 1][j], matrix[i][j - 1]);
        }
    }
    return {subSeq, matrix[m][m]};
}
int main()
{
    string str, sub;
    cout << "Enter the strings: ";
    cin >> str;
    sub = str;
    reverse(sub.begin(), sub.end());
    cout << str << " " << sub << endl;
    int m = str.size();
    vector<vector<int>> matrix(m + 1, vector<int>(m + 1, 0));
    pair<string, int> subSeq = LCS(str, sub, matrix);
    cout << subSeq.first << " " << subSeq.second << endl;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}