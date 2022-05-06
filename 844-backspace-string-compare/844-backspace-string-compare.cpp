class Solution {
public:
    
    void out1(string &s, stack<int>&t){
        for (auto &c:s){
            if (c == '#' && !t.empty())
                t.pop();
            else if (c != '#')
                t.push(c);
        }
        
        return;
    }
    
    void out2(string& s, stack<int>& t){
        while (!t.empty()){
            s.push_back(t.top());
            t.pop();
        }
        return;
    }
    
    bool backspaceCompare(string s, string t) {
        stack<int>a,b;
        string c,d;
        out1(s,a); out1(t,b);
        out2(c,a); out2(d, b);
        return d==c;
    }
};