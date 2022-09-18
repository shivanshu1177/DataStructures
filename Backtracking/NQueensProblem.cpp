#include <bits/stdc++.h>

void addSolution(vector<vector<int>> &board, vector<vector<int>> &ans, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    int x = row;
    int y = col;

    // row
    while (y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        y--;
    }

    x = row;
    y = col;
    // diagnol
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        y--;
        x--;
    }

    x = row;
    y = col;
    while (x < n && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        y--;
        x++;
    }
    return true;
}

void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n)
{
    // base case
    if (col == n)
    {
        addSolution(board, ans, n);
        return;
    }

    // solving 1 case

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // if placing queen is safe
            board[row][col] = 1;
            // recursion
            solve(col + 1, ans, board, n);
            // backtracking
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> nQueens(int n)
{
    // Write your code here
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> ans;

    solve(0, ans, board, n);
    return ans;
}