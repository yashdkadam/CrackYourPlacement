class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        map<int, int> m;
        for (auto i : nums)
        {
            m[i]++;
        }
        for (auto i : m)
        {
            if (i.second > 1)
                ans.push_back(i.first);
        }
        return ans;
    }
};