#include <bits/stdc++.h>
using namespace std;
int prims(vector<pair<int, int>> Graph[], vector<int> &vis, vector<pair<int, pair<int, int>>> &MST, int start)
{
    int mst = 0;
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    pq.push({0, {start, -1}}); // weight, node, parent
    while (!pq.empty())
    {
        int weight = pq.top().first;
        int node = pq.top().second.first;
        int parent = pq.top().second.second;
        pq.pop();
        if (vis[node])
            continue;
        vis[node] = 1;
        mst += weight;
        if (parent != -1)
            MST.push_back({parent, {node, weight}});
        for (auto adj : Graph[node])
        {
            int adjNode = adj.first;
            int edgeWeight = adj.second;
            if (!vis[adjNode])
            {
                pq.push({edgeWeight, {adjNode, node}});
            }
        }
    }
    return mst;
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
        cout << "Enter the node and adjacent node and weight: ";
        cin >> node >> adjNode >> weight;
        Graph[node].push_back({adjNode, weight});
        Graph[adjNode].push_back({node, weight});
    }
    int start;
    vector<int> vis(vertices, 0);
    vector<pair<int, pair<int, int>>> MST; // Parent, AdjNode, Weight
    cout << "Enter the start node: ";
    cin >> start;
    int mst = prims(Graph, vis, MST, start);
    cout << "Total weight of MST: " << mst << endl;
    cout << "MST:-" << endl;
    for (auto it : MST)
    {
        cout << "(" << it.first << ") - " << it.second.second << " - (" << it.second.first << ")" << endl;
    }
}