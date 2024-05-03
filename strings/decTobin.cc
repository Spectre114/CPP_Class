#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    string res = "";
    int i = 0;
    while (n > 0)
    {
        res.push_back((n % 2) + '0');
        n = n / 2;
        i++;
    }
    reverse(res.begin(), res.end());
    cout << res;
}