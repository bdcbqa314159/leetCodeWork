class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> u{};
        
        for (int i = 0; i<ops.size(); i++){
            if (ops[i] != "C" && ops[i] != "D" && ops[i] != "+")
                u.push_back(stoi(ops[i]));
            if (ops[i] == "C") u.pop_back();
            
            if (ops[i] == "D") u.push_back(2*u[u.size()-1]);
            
            if (ops[i] == "+") u.push_back(u[u.size()-1]+u[u.size()-2]);
        }
        
        return accumulate(u.begin(), u.end(), 0);
    }
};