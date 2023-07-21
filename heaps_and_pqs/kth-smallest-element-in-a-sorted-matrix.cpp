class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        multiset<int> s;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                s.insert(matrix[i][j]);
            }
        }
        for(auto i : s){
            if(k == 1) return i;
            k--;
        }
        cout << endl;
        return -1;
    }
};