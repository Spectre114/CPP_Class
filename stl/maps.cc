#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp; // map<datatype of key,datatype of value>
    int n;
    cout << "Enter the size of input: ";
    cin >> n;
    vector<int> inp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        inp.push_back(x); // [1,2,4,1,2,6,7,2]
    }
    for (auto it : inp)
    {
        mp[it]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " -> " << it.second << endl;
    }
}