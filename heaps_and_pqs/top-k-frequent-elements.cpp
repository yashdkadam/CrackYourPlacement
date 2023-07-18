class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> v;
        unordered_map<int, int> m;
        set<pair<int, int>> s;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto i : m)
        {
            s.insert({i.second, i.first});
        }
        auto it = s.rbegin();
        while (k--)
        {
            v.push_back(it->second);
            it++;
        }
        return v;
    }
};