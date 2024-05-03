//Vector, pairs, maps, sets, stack, queue, priority_queue
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>> pq;              // Max Heap
    priority_queue<int, vector<int>, greater<int>> p; // Min Heap
    pq.push(1);
    pq.push(2);
    pq.push(3);
    p.push(1);
    p.push(2);
    p.push(3);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
}