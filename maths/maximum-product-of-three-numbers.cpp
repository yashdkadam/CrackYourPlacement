class Solution {
public: 
    void f(int ind, vector<int>& nums, vector<int> &ds, int n, int &maxi){
        if(ds.size() == 3){
            int cal = (ds[0]*ds[1])*ds[2];
            maxi = max(maxi, cal);
        }
        for(int i = ind; i < n; i++){
            ds.push_back(nums[i]);
            f(i + 1, nums, ds, n, maxi);
            ds.pop_back();
        }
        return;
    }
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ds;
        int maxi = INT_MIN;
        if(nums.size() <= 25){
            f(0, nums, ds, nums.size(), maxi);
        } else{
            vector<int> temp;
            int k = 3;
            int i = 0, j = nums.size() - 1;
            while(k--){
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                i++;
                j--;
            }
            f(0, temp, ds, temp.size(), maxi);
        }
        return maxi;
    }
};