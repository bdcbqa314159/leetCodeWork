class Solution {
public:
    
    void helper(string &s, stack<int>& t){
        for (auto &u : s){
            if (u == '#' && !t.empty())
                t.pop();
            else if (u!='#')
                t.push(u);
        }
        return;
    }
    
    void helper2(string &s, stack<int>& t){
        while (!t.empty()){
            s.push_back(t.top());
            t.pop();
        }
        return;
    }
    
    
    bool backspaceCompare(string s, string t) {
        string a,b;
        stack<int> c,d;
        helper(s,c);
        helper(t,d);
        helper2(a,c);
        helper2(b,d);
        
        return a==b;
    }
};