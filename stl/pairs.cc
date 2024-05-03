#include <bits/stdc++.h>
using namespace std;
main()
{
    // pair<data_type_of_key,data_type_of_value> pair_name;
    // pair<int, int> p;
    // p = {2, 3};
    // cout << p.first;
    vector<pair<int, int>> vp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int key, val;
        cin >> key >> val;
        vp.push_back({key, val});
    }
    // for (int i = 0; i < vp.size(); i++)
    // {
    //     cout << vp[i].first << "-> " << vp[i].second << endl;
    // }
    // for(data_type name_of_iterator: thing you want to iterate upon)
    for (auto i : vp)
    {
        cout << i.first << "-> " << i.second << endl;
    }
    // reverse , sort, find - set , maps(group of pairs)
}