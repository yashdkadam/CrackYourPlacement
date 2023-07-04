class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int init = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (init != nums[i])
                return init;
            init++;
        }
        return init;
    }
};