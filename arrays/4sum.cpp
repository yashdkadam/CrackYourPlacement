class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> s;
        if(n >= 4){
            for(int i = 0; i < n - 3; i++){
                if(i == 0 || (i > 0 && (nums[i] != nums[i - 1]))){
                    for(int j = i + 1; j < n - 2; j++){
                        long long int lo = j + 1, hi = n - 1, sum = (long long)target - (long long)nums[i] - (long long)nums[j];
                        while(lo < hi){
                            if(nums[lo] + nums[hi] == sum){
                                vector<int> temp = {nums[i], nums[j], nums[lo], nums[hi]};
                                if(s.find(temp) == s.end()){
                                    ans.push_back(temp);
                                    s.insert(temp);
                                }

                                if(lo < hi && nums[lo] == nums[lo + 1]) lo++;
                                if(lo < hi && nums[hi] == nums[hi - 1]) hi++;

                                lo++;
                                hi--;
                            }
                            else if(nums[lo] + nums[hi] < sum) lo++;
                            else hi--;
                        } 
                    }
                }
            }    
        }  
        return ans;
    }
};