#include <bits/stdc++.h>
using namespace std;
vector<string> out;
void subsequence(string str, int i, string &res)
{
    if (i == str.size())
    {
        out.push_back(res);
        return;
    }
    res.push_back(str[i]);
    subsequence(str, i + 1, res);
    res.pop_back();
    subsequence(str, i + 1, res);
}
int main()
{
    string str;
    getline(cin, str);
    string res = "";
    subsequence(str, 0, res);
    for (auto it : out)
        cout << it << endl;
}