class Solution {
public:
    
    void f(string &s, stack<int>& t){
        for (auto &e:s){
            if (e == '#' && !t.empty())
                t.pop();
            else if (e != '#')
                t.push(e);
        }
        return;
    }
    
    void g(string &s, stack<int>& t){
        while (!t.empty()){
            s.push_back(t.top());
            t.pop();
        }
        return;
    }
    
    
    bool backspaceCompare(string s, string t) {
        stack<int>a, b;
        f(s,a); f(t,b);
        string s1, s2;
        g(s1,a);g(s2,b);
        return s1==s2;
    }
};