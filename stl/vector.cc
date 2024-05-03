#include <bits/stdc++.h>
using namespace std;
main()
{
    // vector<data_type> vector_name;

    // vector<data_type> vector_name(size,value_to_initalize_with(optional));
    vector<int> a;
    // To insert in a vector -> push_back(value);
    // vector_name.size() -> size of vector
    int n;
    cout << "Enter the number of values to insert: ";
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int temp;
    //     cin >> temp;
    //     a.push_back(temp);
    // }
    // a.push_back(10);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v.push_back(10);
    // pop_back() -> pops value from last of vector.
    // v.pop_back();
    cout << "Size: " << v.size() << endl;
    for (auto it : v)
        cout << it << " ";
    cout << endl;
    if (find(v.begin(), v.end(), 2) != v.end())
    {
        cout << "true";
    }
    // auto pos = find(v.begin(), v.end(), 2);
    // v.erase(pos);
    // while (true)
    // {
    //     if (str.empty() || find(str.begin(), str.end(), sub) == str.end())
    //         break;
    //     auto it = find(str.begin(), str.end(), sub);
    //     str.erase(it);
    // }
}