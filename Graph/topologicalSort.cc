#include <bits/stdc++.h>
using namespace std;
void DFS(vector<int> Graph[], vector<int> &vis, stack<int> &st, int start)
{
    vis[start] = 1;
    for (auto adj : Graph[start])
    {
        if (!vis[adj])
            DFS(Graph, vis, st, adj);
    }
    st.push(start);
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
        // Graph[adjNode].push_back(node);
    }
    vector<int> vis(vertices, 0);

    vector<int> topo;
    stack<int> st;
    for (int i = 0; i < vertices; i++)
    {
        if (!vis[i])
            DFS(Graph, vis, st, i);
    }
    while (!st.empty())
    {
        topo.push_back(st.top());
        st.pop();
    }
    for (auto t : topo)
    {
        cout << t << " ";
    }
}