class Solution {
public:
    string convertToTitle(int n) {
        string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans = "";
        while(n){
            ans += str[(n - 1)%26];
            n = (n - 1)/26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};