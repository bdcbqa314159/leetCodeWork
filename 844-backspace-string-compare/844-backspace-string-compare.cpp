class Solution {
public:
    
    void x(string &s, stack<int>& t){
        for (auto &u:s){
            if (u=='#' && !t.empty())
                t.pop();
            else if (u!='#')
                t.push(u);
        }
        return;
    }
    
    void y(string &s, stack<int>& t){
        while (!t.empty()){
            s.push_back(t.top());
            t.pop();
        }
        return;
    }
    
    
    bool backspaceCompare(string s, string t) {
        stack<int> a, b;
        x(s,a); x(t,b);
        string u,v;
        y(u,a); y(v,b);
        return u==v;
    }
};