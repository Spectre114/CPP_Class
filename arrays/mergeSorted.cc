#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> A, vector<int> B)
{
    int i = 0, j = 0;
    int m = A.size();
    int n = B.size();
    vector<int> merged;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            merged.push_back(A[i]);
            i++;
        }
        else if (A[i] == B[j])
        {
            merged.push_back(A[i]);
            merged.push_back(B[j]);
            i++;
            j++;
        }
        else
        {
            merged.push_back(B[j]);
            j++;
        }
    }
    while (i < m)
    {
        merged.push_back(A[i]);
        i++;
    }
    while (j < n)
    {
        merged.push_back(B[j]);
        j++;
    }
    return merged;
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> A(m), B(n);
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    vector<int> merged;
    merged = merge(A, B);
    for (auto it : merged)
    {
        cout << it << " ";
    }
}