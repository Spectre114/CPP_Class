#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, pair<int, pair<int, int>>> pp;
    pp = {2, {3, {4, 5}}};
    cout << pp.first << "->" << pp.second.first << "->" << pp.second.second.first << "->" << pp.second.second.second;
}