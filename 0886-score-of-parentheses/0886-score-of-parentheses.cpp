class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> St;
        int cur = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '('){
                St.push(cur);
                cur = 0;
            }else{
                if(cur==0){
                    cur = 1;
                }
                else{
                    cur*=2;
                }
                cur = St.top() + cur;
                St.pop();
            }
        }
        return cur;
    }
};