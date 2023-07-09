class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> v;
        string str;
        for (int i = 0; i < s.size(); i++)
        {
            if (str.size() != 0 && s[i] == ' ')
            {
                v.push_back(str);
                str.clear();
            }
            else if (str.size() == 0 && s[i] == ' ')
            {
                continue;
            }
            if (s[i] != ' ')
            {
                str += s[i];
            }
        }
        v.push_back(str);
        s.clear();
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0)
            {
                s += v[i];
            }
            else
            {
                s += " " + v[i];
            }
        }
        if (s[0] == ' ')
        {
            s.erase(s.begin());
        }
        return s;
    }
};