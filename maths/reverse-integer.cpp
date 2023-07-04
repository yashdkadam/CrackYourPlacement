class Solution
{
public:
    int reverse(int x)
    {
        if (x == INT_MAX || x == INT_MIN)
            return 0;
        int flag = 0;
        if (x < 0)
        {
            flag = 1;
            x = -1 * x;
        }
        stack<int> s;
        while (x != 0)
        {
            s.push(x % 10);
            x /= 10;
        }
        long long int num = 0;
        int i = 0;
        while (!s.empty())
        {
            if (num + pow(10, i) * s.top() < INT_MAX)
                num += pow(10, i) * s.top();
            else if (num + pow(10, i) * s.top() >= INT_MAX)
                return 0;
            s.pop();
            i++;
        }
        if (flag == 1 && num >= INT_MAX)
            return 0;
        else if (flag == 1 && num < INT_MAX)
            return num * -1;
        return num;
    }
};