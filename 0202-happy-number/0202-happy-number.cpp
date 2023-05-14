class Solution {
public:
    
    int helper(int n){
        int res = 0;
        while (n){
            res+=(n%10)*(n%10);
            n/=10;
        }
        return res;
    }
    
    bool isHappy(int n) {
        vector<int> u = {1,2,4,16,20,37,42,58,89,145};
        int s = 0;
        while (find(u.begin(), u.end(), s) == u.end()){
            s = helper(n);
            n = s;
        }
        return 1 == s;
    }
};

//vector<int> u = {1,2,4,16,20,37,42,58,89,145};