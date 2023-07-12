class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> str = strs;
        vector<vector<string>> v;
        vector<string> v1;
        map<string, vector<int>> m;
        for(int i = 0; i < strs.size(); i++){
            sort(strs[i].begin(), strs[i].end());
        }
        for(int i = 0; i < strs.size(); i++){
            m[strs[i]].push_back(i);
        }
        for(auto i : m){
            for(auto j : i.second){
                v1.push_back(str[j]);
            }
            v.push_back(v1);
            v1.clear();
        }
        return v;
    }
};