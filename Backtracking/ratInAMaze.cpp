void ratInMaze(vector<vector<int>> &m, int n, int row, int col, vector<string> &ans, string s, vector<vector<int>> &vis)
{
    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(s);
        return;
    }

    // downward
    if (row + 1 < n && vis[row + 1][col] == 0 && m[row + 1][col] == 1)
    {
        vis[row][col] = 1;
        ratInMaze(m, n, row + 1, col, ans, s + 'D', vis);
        vis[row][col] = 0;
    }

    // leftward
    if (col - 1 >= 0 && vis[row][col - 1] == 0 && m[row][col - 1] == 1)
    {
        vis[row][col] = 1;
        ratInMaze(m, n, row, col - 1, ans, s + 'L', vis);
        vis[row][col] = 0;
    }

    // rightward
    if (col + 1 < n && vis[row][col + 1] == 0 && m[row][col + 1] == 1)
    {
        vis[row][col] = 1;
        ratInMaze(m, n, row, col + 1, ans, s + 'R', vis);
        vis[row][col] = 0;
    }

    // upward
    if (row - 1 >= 0 && vis[row - 1][col] == 0 && m[row - 1][col] == 1)
    {
        vis[row][col] = 1;
        ratInMaze(m, n, row - 1, col, ans, s + 'U', vis);
        vis[row][col] = 0;
    }
    return;
}

vector<string> searchMaze(vector<vector<int>> &arr, int n)
{
    vector<string> ans;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    string s = "";
    int row = 0;
    int col = 0;
    if (arr[row][col] == 1)
    {
        ratInMaze(arr, n, row, col, ans, s, vis);
    }
    return ans;
}