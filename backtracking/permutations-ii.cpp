class Solution {
public:
    void f(int ind, int n, vector<int>& nums, set<vector<int>> &ans){
        if(ind == n){
            ans.insert(nums);
            return;
        } 

        for(int i = ind; i < n; i++){
            swap(nums[ind], nums[i]);
            f(ind + 1, n, nums, ans);
            swap(nums[ind], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        vector<vector<int>> ans1;
        f(0, nums.size(), nums, ans);
        for(auto i : ans){
            ans1.push_back(i);
        }
        return ans1;
    }
};