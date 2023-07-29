class Solution {
public:
    bool isSafe(const vector<vector<int>>& board, int row, int col) {
    int rows = board.size();
    int cols = board[0].size();
    return (row >= 0 && row < rows && col >= 0 && col < cols);
}
    int getLiveCount(int row, int col, int n, int m, vector<vector<int>>& board){
        int cnt = 0;
        for(int i = -1; i <= 1; i++){
            for(int j =-1; j <= 1; j++){
                int nrow = row + i;
                int ncol = col + j;
                if(isSafe(board, nrow, ncol) == true){ 
                    if(board[nrow][ncol] == 1)
                    cnt++;
                }
            }
        }
        return cnt;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; i++){
                int livecount = getLiveCount(i, j, n, m, board);
                cout << board[i][j] << " "  << livecount << endl;
            }
        }
    }
};