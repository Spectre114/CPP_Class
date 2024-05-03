#include <bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>> Graph, vector<int> &vis, int start)
{
    int v = Graph.size();
    queue<int> q;
    vector<int> bfs;
    q.push(start);
    vis[start] = 1;
    bfs.push_back(start);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int i = 0; i < v; i++)
        {
            if (Graph[node][i] == 1 && !vis[i])
            {
                vis[i] = 1;
                q.push(i);
                bfs.push_back(i);
            }
        }
    }
    for (auto it : bfs)
    {
        cout << it << " ";
    }
}
int main()
{
    int vertices, edges;
    cout << "Enter the vertices and edges: ";
    vector<vector<int>> Graph(vertices, vector<int>(vertices));
    cin >> vertices >> edges;
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cin >> Graph[i][j];
        }
    }
    vector<int> Graph[vertices];
    // To convert matrix rep into adjacency list
    //  for (int i = 0; i < vertices; i++)
    //  {
    //      for (int j = 0; j < vertices; j++)
    //      {
    //          if (Graph[i][j])
    //          {
    //              G[i].push_back(j);
    //          }
    //      }
    //  }
    //  for (int i = 0; i < edges; i++)
    //  {
    //      int node, adjNode;
    //      cout << "Enter the node and adjacent node: ";
    //      cin >> node >> adjNode;
    //      Graph[node].push_back(adjNode);
    //      Graph[adjNode].push_back(node);
    //  }
    vector<int> vis(vertices, 0);
    for (int i = 0; i < vertices; i++)
    {
        if (!vis[i])
            BFS(Graph, vis, i);
    }
}