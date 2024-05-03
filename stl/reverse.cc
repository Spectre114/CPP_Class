// reverse function in vector
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> rev(n);
    for (int i = 0; i < n; i++)
        cin >> rev[i];
    // reverse(vector_name.begin(), vector_name.end());
    reverse(rev.begin(), rev.begin() + 4); //[0-3]
    for (int i = 0; i < n; i++)
        cout << rev[i];
}