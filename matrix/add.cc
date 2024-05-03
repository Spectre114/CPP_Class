#include <iostream>
using namespace std;
int main()
{
    int row1, col1;
    cout << "Enter the row and column for matrices: ";
    cin >> row1 >> col1;
    int mat1[row1][col1]; // 2D array
    int mat2[row1][col1]; // 2D array
    cout << "Enter values in first matrix: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter values in second matrix: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> mat2[i][j];
        }
    }
    cout << "**Input Done**" << endl;
    int res[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}