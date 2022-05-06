class Solution {
public:
    
    void f(string &s, stack<int>&b){
        for (auto &e: s){
            if (e == '#' && !b.empty())
                b.pop();
            else if (e!='#')
                b.push(e);
        }
        return;
    }
    
    void g(string &s, stack<int>&b){
        while (!b.empty()){
            s.push_back(b.top());
            b.pop();
        }
        return;
    }
    
    bool backspaceCompare(string s, string t) {
        
        stack<int> u,v;
        f(s,u); f(t,v);
        string a, b;
        g(a,u); g(b,v);
        return a==b;
    }
};