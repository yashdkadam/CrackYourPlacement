class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j)
                    continue;
                if ((nums[i] + nums[j]) == target)
                {
                    v = {i, j};
                    return v;
                }
            }
        }
        return v;
    }
};