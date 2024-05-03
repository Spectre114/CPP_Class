#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    // push(), pop(), empty(), front()
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while (!q.empty())
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
    }
}