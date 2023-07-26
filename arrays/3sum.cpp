class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n - 2; i++){
            if(i == 0 || (i > 0 && nums[i] != nums[i - 1])){
                int lo = i + 1, hi = n - 1, sum = 0 - nums[i];
                while(lo < hi){
                    if(nums[lo] + nums[hi] == sum){ 
                        vector<int> temp = {nums[i], nums[lo], nums[hi]}; 
                        if(s.find(temp) == s.end()){
                            ans.push_back(temp);
                            s.insert(temp);
                        }

                        if(lo < hi &&  nums[lo] == nums[lo + 1]) lo++;
                        if(lo < hi && nums[hi] == nums[hi - 1]) hi--;

                        lo++;
                        hi--;
                    }
                    else if(nums[lo] + nums[hi] < sum) lo++;
                    else hi--;
                }
            }
        }
        return ans;
    }
};