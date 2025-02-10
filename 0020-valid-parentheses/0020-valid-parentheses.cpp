class Solution {
public:
    bool isValid(string s) {
        stack<char> St;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                St.push(s[i]);
            }
            else{
                if(St.empty()) return false;
                if(s[i] == ')' && St.top() != '(') return false;
                if(s[i] == '}' && St.top() != '{') return false;
                if(s[i] == ']' && St.top() != '[') return false;
                St.pop();
            }
        }
        return St.empty();
    }
};