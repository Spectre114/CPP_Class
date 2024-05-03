#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter row and column: ";
    cin >> row >> col;
    vector<vector<int>> matrix(row, vector<int>(col));
    cout << "Enter values in the matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int A = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]);
    int B = matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
    int C = matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    int determinant = A - B + C;
    cout << determinant;
}