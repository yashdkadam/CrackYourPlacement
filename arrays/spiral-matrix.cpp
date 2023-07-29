class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v = {0};
        int i = 0, j = 0;
        for(j; j < matrix[i].size(); j++){
            if(matrix[i][j] == -1000) break;
            else cout << matrix[i][j] << "\n";
            matrix[i][j] = -1000;
        }
        for(i; i < matrix.size(); i++){
            if(matrix[i][j] == -1000) break;
            else cout << matrix[i][j] << "\n";
            matrix[i][j] = -1000;
        }
        for(j; j >= 0; j--){
            if(matrix[i][j] == -1000) break;
            else cout << matrix[i][j] << "\n";
            matrix[i][j] = -1000;
        }
        for(i; i < matrix.size(); i--){
            if(matrix[i][j] == -1000) break;
            else cout << matrix[i][j] << "\n";
            matrix[i][j] = -1000;
        }
        return v;
    }
};









