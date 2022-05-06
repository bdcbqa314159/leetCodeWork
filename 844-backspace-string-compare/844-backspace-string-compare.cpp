class Solution {
public:
    
    void f(string &a, stack<int>& u){
        for (auto &e: a){
            if (e=='#' && !u.empty())
                u.pop();
            else if( e!='#')
                u.push(e);
        }return;
    }
    
    void g(string &a, stack<int>&u){
        while (!u.empty()){
            a.push_back(u.top());
            u.pop();
        }
        return;
    }
    
    bool backspaceCompare(string s, string t) {
        stack<int> y,x;
        f(s,y); f(t,x);
        string s1, s2;
        g(s1,y); g(s2,x);
        return s1==s2;
    }
};