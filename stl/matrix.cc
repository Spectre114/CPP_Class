#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Matrix using vector
    int row = 3, col = 3;
    // vector<vector<int>> name(row,vector<int> (col,value_to_initialize(optional)));
    // vector<vector<int>> matrix(row, vector<int>(col));
    vector<vector<int>> mat;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        mat.push_back(temp);
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    // size
    // matrix.size() -> no of rows
    // matrix[index].size() -> no of columns in that row;
    // matrix[1].size() -> no. of columns in '1' row;
}