#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the row and column for the matrices: ";
    cin >> row >> col;
    vector<vector<int>> matrix1(row, vector<int>(col));
    vector<vector<int>> matrix2(row, vector<int>(col));
    cout << "Enter values for Matrix 1: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter values for Matrix 2: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    vector<vector<int>> res(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            res[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
}