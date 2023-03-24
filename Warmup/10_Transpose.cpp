//? Write a program that takes matrix of order row*column and returns the transposed matrix.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter number of rows and columns: ";
    cin >> row >> col;
    int matrix[row][col], transpose[col][row];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}