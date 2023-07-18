class Solution
{
public:
    int climbStairs(int n)
    {
        int prev = 1;
        int prev_i = 1;
        for (int i = 2; i <= n; i++)
        {
            int curr_i = prev + prev_i;
            prev_i = prev;
            prev = curr_i;
        }
        return prev;
    }
};