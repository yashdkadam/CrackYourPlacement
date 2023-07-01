class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        vector<int> temp = nums;
        nums.clear();
        int cnt = 0;
        for (auto i : temp)
        {
            if (i != 0)
                nums.push_back(i);
            else if (i == 0)
                cnt++;
        }
        while (cnt--)
        {
            nums.push_back(0);
        }
    }
};