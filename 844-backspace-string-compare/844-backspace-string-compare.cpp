class Solution {
public:
    
    void x(string& s, stack<int>& t){
        for (auto &u: s){
            if (u=='#' && !t.empty())
                t.pop();
            else if(u != '#')
                t.push(u);
        }
        return;
    }
    
    void y(stack<int> u, string &v){
        while (!u.empty()){
            v.push_back(u.top());
            u.pop();
        }
        return;
    }
    
    bool backspaceCompare(string s, string t) {
        stack<int> a,b;
        x(s,a); x(t,b);
        string u, v;
        y(a,u); y(b,v);
        return u==v;
    }
};