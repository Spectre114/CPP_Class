#include <bits/stdc++.h>
using namespace std;
bool checkBipartite(vector<int> Graph[],vector<int> &color){
    queue<int> q;
    color[0] = 0;
    q.push(0);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto adj:Graph[node]){
            if(color[adj] == -1){
                color[adj] = !color[node];
                q.push(adj);
            }
            else if(color[adj] == color[node]) return false;
        }
    }
    return true;
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
    vector<int> color(vertices, -1);
    bool isBipartite = checkBipartite(Graph,color);
    cout<<isBipartite<<endl;
}