#include <bits/stdc++.h>
using namespace std;
void Djikstras(vector<pair<int, int>> Graph[], vector<int> &dist, int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[start] = 0;
    pq.push({0, start}); // weight, node
    while (!pq.empty())
    {
        int node = pq.top().second;
        int prevWeight = pq.top().first;
        pq.pop();
        for (auto adj : Graph[node])
        {
            int adjNode = adj.first;
            int curWeight = adj.second;
            if (dist[adjNode] > curWeight + prevWeight)
            {
                dist[adjNode] = curWeight + prevWeight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
}
int main()
{
    int vertices, edges;
    cout << "Enter the vertices and edges: ";
    cin >> vertices >> edges;
    vector<pair<int, int>> Graph[vertices];
    for (int i = 0; i < edges; i++)
    {
        int node, adjNode, weight;
        cout << "Enter the node and adjacent node: ";
        cin >> node >> adjNode >> weight;
        Graph[node].push_back({adjNode, weight});
        Graph[adjNode].push_back({node, weight});
    }
    vector<int> dist(vertices, 1e9); // 1e9 = 10^9
    int start;
    cout << "Enter the node to start: ";
    cin >> start;
    Djikstras(Graph, dist, start);
    for (auto d : dist)
    {
        cout << d << " ";
    }
}