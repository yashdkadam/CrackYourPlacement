//User function Template for C++

class Solution{
  public:
    bool isAnagram(string s1, string s2){
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1 == s2) return true;
        return false;
    }
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string> > ans;
        vector<string> v;
        int n = string_list.size();
        for(int i = 0; i < n; i++){
            if(string_list[i] == "-1") continue;
            v.push_back(string_list[i]);
            for(int j = i + 1; j < n; j++){
                if(j > n - 1) break;
                if(string_list[j] == "-1") continue;
                if(isAnagram(string_list[i], string_list[j])){
                    v.push_back(string_list[j]);
                    string_list[j] = "-1";
                }
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};