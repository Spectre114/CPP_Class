#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int key, val;
        cin >> key >> val;
        v.push_back({key, val});
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) // Time complexity O(nlogn) - Hybrid sort
         { return a.second < b.second; });                          // We can pass a function known as lambda function that can sort our array in desired way
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}