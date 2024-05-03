#include <bits/stdc++.h>
using namespace std;
void pprint(vector<int> Graph[], int vertices)
{
    for (int i = 0; i < vertices; i++)
    {
        cout << i << " - ";
        for (auto adj : Graph[i])
        {
            cout << adj << " ";
        }
        cout << endl;
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
    pprint(Graph, vertices);
}