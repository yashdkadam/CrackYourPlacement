class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        int maxi = INT_MIN, ind = 0;
        while(i <= j){
            if(nums[i] > maxi){
                maxi = nums[i];
                ind = i;
            }
            if(nums[j] > maxi){
                maxi = nums[j];
                ind = j;
            }
            i++;
            j--;
        }
        return ind;
    }
};