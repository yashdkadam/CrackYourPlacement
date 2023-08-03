class Solution {
public:
    bool ispal(string &s){
        cout << s << endl;
        int i = 0, j = s.size() - 1;
        while(i <= j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    pair<int, pair<int, int>> checkdiff(string &s){
        pair<int, int> p;
        int i = 0, j = s.size() - 1, cnt = 0, flag = 0;
        while(i <= j){
            if(s[i] != s[j]){
                cnt++;
                if(flag == 0){
                    p.first = i;
                    p.second = j;
                }
                flag = 1;
            }
            i++;
            j--;
        }
        return {cnt, p};
    }
    bool validPalindrome(string s) {
        if(ispal(s)) return true;
        pair<int, pair<int, int>> check = checkdiff(s);
        string temp = s;
        if(ispal(s.erase(check.second.first, 1))) return true;
        s = temp;
        if(ispal(s.erase(check.second.second, 1))) return true;
        
        cout << check.first << " " << check.second.first << " " << check.second.second << endl;
        return 0;
    }
};