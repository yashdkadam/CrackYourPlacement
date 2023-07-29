class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int curr = 0, carry = 0;
        string s1, s2;
        if(a.size() >= b.size()){
            s1 = a;
            s2 = b;
        } else {
            s1 = b;
            s2 = a;
        }
        while(s2.size() != s1.size()){
            s2.insert(0, "0");
        }
        for(int i = s2.size() - 1; i >= 0; i--){
            int curr1 = int(s1[i]) - 48, curr2 = int(s2[i]) - 48;
            int res = (curr1 ^ curr2);
            if(carry == 1){
                res ^= carry;
                if(res == 1) carry = 0;
            }
            ans += to_string(res);
            if(s2[i] == '1' && s1[i] == '1') carry = 1;
        }
        reverse(ans.begin(), ans.end());
        if(carry == 1) ans.insert(0, to_string(carry));
        return ans;
    }
};