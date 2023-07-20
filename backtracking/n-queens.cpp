class Solution {
public:
    void solve(int col, vector<int> &leftRow, vector<int> &upperRow, vector<int> &lowerRow,vector<string> &board, vector<vector<string>> &ans, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(leftRow[row] == 0 && upperRow[n - 1 + col - row] == 0 && lowerRow[row + col] == 0){
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lowerRow[row + col] = 1;
                upperRow[n - 1 + col - row] = 1;
                solve(col + 1, leftRow, upperRow, lowerRow,board, ans, n);
                board[row][col] = '.';
                leftRow[row] = 0;
                lowerRow[row + col] = 0;
                upperRow[n - 1 + col - row] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i = 0; i < n; i++){
            board[i] = s;
        }
        vector<int> leftRow(n, 0), upperRow(2 * n - 1, 0), lowerRow(2 * n - 1, 0);
        solve(0, leftRow, upperRow, lowerRow, board, ans, n);
        return ans;  
    }
};