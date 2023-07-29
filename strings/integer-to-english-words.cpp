class Solution {
public:
    std::string r(const std::string& str) {
    auto start = std::find_if(str.begin(), str.end(), [](char c) {
        return !std::isspace(c);
    });
    auto end = std::find_if(str.rbegin(), str.rend(), [](char c) {
        return !std::isspace(c);
    }).base();
    return (start < end) ? std::string(start, end) : std::string();
}
    unordered_map<int, string> tens;
    unordered_map<int, string> unit;
    vector<string> ans;
    vector<string> s1 = {"Hundred", "Thousand", "Million", "Billion"};
    
    void f(int num){
        cout << num << endl;
        int len = log10(num) + 1;
        cout << len << endl;
        cout << num%10 << endl;
        if(num % 10 == 0 && len == 2){
            cout << num/10 << " num/10 \n";
            cout << tens[num/10] << " num/10 \n";
            ans.push_back(tens[num/10]);
            return;
        }
        if(len == 1) ans.push_back(unit[num]);
        else if(len == 2){
            if(num <= 20) ans.push_back(unit[num]);
            else {
                int uni = num%10;
                int ten = num/10;
                ans.push_back(unit[uni]);
                ans.push_back(tens[ten]);
            }
        } else if(len == 3){
            int hun = num/100;
            int ten = num - hun* 100;
            int uni = num%10;
            if(ten <= 20){ 
                ans.push_back(unit[ten]);}
            else{
            ans.push_back(unit[uni]);
            ans.push_back(tens[ten/10]);
            }
            ans.push_back(s1[0]);
            ans.push_back(unit[hun]);
            cout << hun << " " << ten << " " << uni << endl;
        }
    }
    string numberToWords(int num) {
        string ans1 = "";
        ans.clear();
        unit.insert({
            {1, "One"},{2, "Two"},{3, "Three"},{4, "Four"},{5, "Five"},{6, "Six"},{7, "Seven"},
            {8, "Eight"},{9, "Nine"},{10, "Ten"},{11, "Eleven"},{12, "Twelve"},{13, "Thirteen"},
            {14, "Fourteen"},{15, "Fifteen"},{16, "Sixteen"},{17, "Seventeen"},{18, "Eighteen"},
            {19, "Nineteen"},{20, "Twenty"},
        });
        tens.insert({{1, "Ten"},
            {2, "Twenty"},{3, "Thirty"},{4, "Forty"},{5, "Fifty"},{6, "Sixty"},{7, "Seventy"},
            {8, "Eighty"},{9, "Ninety"},
        });
        if(num == 0) return "Zero";
        if(num <= 20) return unit[num];
        string str = to_string(num);
        vector<string> v;
        int n = str.size();
        int i = 3, j = 0;
        while(!str.empty() || str.size() >= 3){
            if(n - i < 0) break;
            string sub = str.substr(n - i, n - j); 
            str = str.substr(0, n - i);
            if(!sub.empty()) v.push_back(sub);
            i += 3;
            j += 3;  
        }
        v.push_back(str);
        int k = 0;
        for(auto i : v){
            cout << i << endl;
            if(count(i.begin(), i.end(), '0') == i.size()) {
                k++;
                continue;
            }
            if(k > 0) ans.push_back(s1[k]);
            k++;
            f(stoi(i));
        }
        for(int i = ans.size() - 1; i >= 0; i--){
            if(ans[i].empty()) continue;
            if(ans[i] != "Zero") ans1 += ans[i];
            if(i != 0) ans1 += " ";
        }
        return r(ans1);
    }
};

/*

4 5 63 3 24
three hundred twenty four 

2 147 483 647 in words
two billion one hundred forty-seven million four hundred eighty-three thousand six hundred forty-seven
*/