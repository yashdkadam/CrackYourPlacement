class Solution
{
public:
    unsigned long long int solve(int n)
    {
        unsigned long long int sum = 0;
        while (n != 0)
        {
            sum += pow(n % 10, 2);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n)
    {
        unsigned long long int ans = n;
        int j = 0;
        while (ans != 1)
        {
            if (j == 1000)
                return false;
            ans = solve(ans);
            j++;
        }
        return true;
    }
};