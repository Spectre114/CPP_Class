#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of hash table: ";
    cin >> n;
    vector<int> hash[n];
    int val;
    cout << "Enter the no. of values you want to insert: ";
    cin >> val;
    for (int i = 0; i < val; i++)
    {
        int x;
        cout << "Enter the value to insert: ";
        cin >> x;
        hash[x % n].push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        for (auto it : hash[i])
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}