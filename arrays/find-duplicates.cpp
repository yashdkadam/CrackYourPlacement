class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int xori = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            xori = (xori ^ nums[i]);
            cout << xori << " ";
        }
        cout << endl;
        return xori;
    }
};