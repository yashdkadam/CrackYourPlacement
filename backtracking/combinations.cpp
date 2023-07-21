class Solution {
public:
    void f(int ind, int n, int k, vector<int> &ds, vector<int> &v, vector<vector<int>> &ans){
        if(ds.size() == k){
            ans.push_back(ds);
            return;
        }
        for(int i = ind; i < n; i++){
            ds.push_back(v[i]);
            f(i + 1, n, k, ds, v, ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        vector<int> ds;
        vector<vector<int>> ans;
        for(int i = 1 ; i <= n; i++){
            v.push_back(i);
        }
        f(0, n, k, ds, v, ans);
        return ans;
    }
};