class Solution {
public:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>>& grid){
        vis[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({row, col});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            bool flag = false;
            for(int deltarow = -1; deltarow <= 1; deltarow++){
                for(int deltacol = -1; deltacol <= 1; deltacol++){
                    if(flag){
                        int nrow = row + deltarow;
                        int ncol = col + deltacol;
                        if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
                        && grid[nrow][ncol] == '1' && (!vis[nrow][ncol])){
                            vis[nrow][ncol] = 1;
                            q.push({nrow, ncol});
                        }
                    } 
                    // cout << flag << "\n";
                    flag = (flag == true) ? false : true;
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if((!vis[i][j]) && grid[i][j] == '1'){
                    bfs(i, j, vis, grid);
                    count++;
                }
            }
        }
        return count;
    }
};