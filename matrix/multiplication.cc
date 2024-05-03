#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row1, col1;
    cout << "Enter row and column for first matrix: ";
    cin >> row1 >> col1;
    int row2, col2;
    cout << "Enter row and column for second matrix: ";
    cin >> row2 >> col2;
    if (col1 != row2)
        return 0;
    vector<vector<int>> matrix1(row1, vector<int>(col1));
    vector<vector<int>> matrix2(row2, vector<int>(col2));
    cout << "Enter values in the first matrix: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter values in the second matrix: " << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    vector<vector<int>> res(row1, vector<int>(col2, 0));
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                res[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[0].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
}