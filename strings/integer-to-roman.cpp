class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string> m;
        m.insert({
            {1000, "M"}, {2000, "MM"}, {3000, "MMM"}, {100, "C"}, {200, "CC"}, {300, "CCC"}, {400, "CD"}, {500, "D"}, {600, "DC"}, {700, "DCC"}, {800, "DCCC"}, {900, "CM"}, {10, "X"}, {20, "XX"}, {30, "XXX"}, {40, "XL"}, {50, "L"}, {60, "LX"}, {70, "LXX"}, {80, "LXXX"}, {90, "XC"}, {1, "I"}, {2, "II"}, {3, "III"}, {4, "IV"}, {5, "V"}, {6, "VI"}, {7, "VII"}, {8, "VIII"}, {9, "IX"},
        });
        string ans = "";
        int exp = 1;
        while(num != 0){
            int temp = (num % 10)*exp;
            ans.insert(0, m[temp]);
            num /= 10;
            exp *= 10;
        }
        return ans;
    }
};