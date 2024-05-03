#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<string> out;
    void combination(int i, string digits, string &res, unordered_map<char, string> ph)
    {
        if (i == digits.size())
        {
            out.push_back(res);
            return;
        }
        char digit = digits[i];
        for (auto it : ph[digit])
        {
            res.push_back(it);
            combination(i + 1, digits, res, ph);
            res.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return {};
        unordered_map<char, string> ph;
        ph['2'] = "abc";
        ph['3'] = "def";
        ph['4'] = "ghi";
        ph['5'] = "jkl";
        ph['6'] = "mno";
        ph['7'] = "pqrs";
        ph['8'] = "tuv";
        ph['9'] = "wxyz";
        string res;
        combination(0, digits, res, ph);
        return out;
    }
};
int main()
{
    Solution solution;
    vector<string> ans;
    ans = solution.letterCombinations("6789");
    int count = 0;
    for (auto it : ans)
    {
        cout << it << endl;
        count++;
    }
    cout << count;
}