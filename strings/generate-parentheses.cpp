class Solution {
public:
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        for(int i = 0; i < x.size(); i++){
            if(s.empty()){
                s.push(x[i]);
            } else if((s.top() == '(' && x[i] == ')')){
                s.pop();  
            }
            else{
                s.push(x[i]);
            }
        }
        return s.empty();
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str = "";
        for(int i = 0; i < n; i++) str += "(";
        for(int i = 0; i < n; i++) str += ")";
        do{
            if(ispar(str)) 
                ans.push_back(str);
        }while(next_permutation(str.begin(), str.end()));
        return ans;
    }
};