class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for(auto i : s){
            if(i == '{' || i == '[' || i == '('){
                s1.push(i);
            } else if(i == '}' || i == ']' || i == ')'){
                if(!s1.empty()){
                    if(i == '}' && s1.top() != '{') return false;
                    else if(i == ']' && s1.top() != '[') return false;
                    else if(i == ')' && s1.top() != '(') return false;
                } else if(s1.empty()) return false;
                s1.pop();
            }
        }
        return (s1.empty() == true);
    }
};