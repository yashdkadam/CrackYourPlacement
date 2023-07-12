class Solution
{
public:
    // Function to find the number of islands.
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                int nrow = row + i;
                int ncol = col + j;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && vis[nrow][ncol] == 0)
                {
                    // cout << grid[nrow][ncol] << "\n";

                    dfs(nrow, ncol, vis, grid);
                }
            }
        }
        return;
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // cout << grid[i][j] << " ";
                if (!vis[i][j] && grid[i][j] == '1')
                {
                    dfs(i, j, vis, grid);
                    cnt++;
                }
            }
        }
        // cout << endl;
        return cnt;
    }
};