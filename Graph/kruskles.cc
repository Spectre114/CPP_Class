#include <bits/stdc++.h>
using namespace std;
int findParent(int node, vector<int> &parent)
{
    if (parent[node] == node)
        return node;
    return parent[node] = findParent(parent[node], parent);
}
void unionFind(int node, int adj, vector<int> &parent)
{
    int parentNode = findParent(node, parent);
    int parentAdj = findParent(adj, parent);
    parent[parentNode] = parentAdj;
}
int Kruskles(vector<pair<int, pair<int, int>>> Edges, vector<int> &parent)
{
    int mst = 0;
    // int v = Edges.size();
    sort(Edges.begin(), Edges.end());
    for (auto edges : Edges)
    {
        int weight = edges.first;
        int node = edges.second.first;
        int adj = edges.second.second;
        if (findParent(node, parent) != findParent(adj, parent))
        {
            mst += weight;
            unionFind(node, adj, parent);
            cout << node << " " << adj << endl;
            for (auto it : parent)
            {
                cout << it << " ";
            }
            cout << endl;
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
        cout << "Enter the node and adjacent node and edge weights: ";
        cin >> node >> adjNode >> weight;
        Graph[node].push_back({adjNode, weight});
        Graph[adjNode].push_back({node, weight});
    }
    vector<pair<int, pair<int, int>>> Edges;
    for (int i = 0; i < vertices; i++)
    {
        for (auto adj : Graph[i])
        {
            Edges.push_back({adj.second, {i, adj.first}});
        }
    }
    vector<int> parent(vertices);
    for (int i = 0; i < vertices; i++)
    {
        parent[i] = i;
    }
    int mst = Kruskles(Edges, parent);
    cout << mst << endl;
}