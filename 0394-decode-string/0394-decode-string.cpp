class Solution {
public:
    string decodeString(string s) {
        int k = 0;
        string cur = "";
        stack<string> Sts;
        stack<int> Stk;
        for(int i = 0; i<s.size();i++){
            if(s[i] == '['){
                Sts.push(cur);
                cur = "";
                Stk.push(k);
                k = 0;
            }
            else if(s[i] == ']'){
                int kk = Stk.top();
                Stk.pop();
                string temp="";
                while(kk--){
                    temp+=cur;
                } 
                cur = temp;
                cur = Sts.top()+cur;
                Sts.pop();
            }
            else if(s[i]>='0' && s[i]<='9'){
                k = k*10 + (s[i]-'0');
            }else{
                cur = cur+s[i];
            }
        }
        return cur;
    }
};