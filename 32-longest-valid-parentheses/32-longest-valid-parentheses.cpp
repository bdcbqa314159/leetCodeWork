class Solution {
public:
    int longestValidParentheses(string s) {
        int maxLen = 0, lastError = -1;
        vector<int> stack;
        
        for (int i = 0; i<s.size(); i++){
            if (s[i] == '(') stack.push_back(i);
            else if(s[i] == ')'){
                if (stack.size()>0){
                    stack.pop_back();
                    int len;
                    if (stack.size() == 0)
                        len = i-lastError;
                    else{
                        len = i-stack.back();
                    }
                    if (len>maxLen) maxLen = len;
                }else
                    lastError = i;
            }
        }
        return maxLen;
    
    }
};