#include <bits/stdc++.h>
using namespace std;
void DFS(vector<int> Graph[], vector<int> &vis, vector<int> &dfs, int start)
{
    vis[start] = 1;
    dfs.push_back(start);
    for (auto adj : Graph[start])
    {
        if (!vis[adj])
            DFS(Graph, vis, dfs, adj);
    }
}
int main()
{
    int vertices, edges;
    cout << "Enter the vertices and edges: ";
    cin >> vertices >> edges;
    vector<int> Graph[vertices];
    for (int i = 0; i < edges; i++)
    {
        int node, adjNode;
        cout << "Enter the node and adjacent node: ";
        cin >> node >> adjNode;
        Graph[node].push_back(adjNode);
        Graph[adjNode].push_back(node);
    }
    vector<int> vis(vertices, 0);
    vector<int> dfs;
    for (int i = 0; i < vertices; i++)
    {
        if (!vis[i])
            DFS(Graph, vis, dfs, i);
    }
    for (auto it : dfs)
    {
        cout << it << " ";
    }
}