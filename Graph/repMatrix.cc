#include <bits/stdc++.h>
using namespace std;
void pprint(vector<vector<int>> Graph)
{
    int vertices = Graph.size();
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            if (Graph[i][j] == 1)
            {
                cout << i << " - " << j << endl;
            }
        }
    }
}
int main()
{
    int vertices;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    vector<vector<int>> Graph(vertices, vector<int>(vertices, 0));
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cin >> Graph[i][j];
        }
    }
    pprint(Graph);
}