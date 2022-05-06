class Solution {
public:
    
    void helper(string &a, stack<int>& b){
        for (auto &u : a){
            if (u=='#' && !b.empty())
                b.pop();
            else if (u!='#')
                b.push(u);
        }
    }
    
    void helper1(string &s, stack<int>u){
        while (!u.empty()){
            s.push_back(u.top());
            u.pop();
        }
        return;
    }
    
    bool backspaceCompare(string s, string t) {
        stack<int> a,b;
        helper(s,a); helper(t, b);
        string c,d;
        helper1(c,a); helper1(d, b);
        return c==d;
    }
};