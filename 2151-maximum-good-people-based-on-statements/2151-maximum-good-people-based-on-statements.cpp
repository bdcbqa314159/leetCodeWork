class Solution {
public:
    int maximumGood(vector<vector<int>>& statements) {
        int n = statements.size();
        
        int result = 0;
        
        for (int i = 1; i<(1<<n); i++){
            bool flag = true;
            
            for (int j = 0; j<n; j++){
                if (!(i&(1<<j)))
                    continue;
                for (int k = 0; k<n; k++){
                    
                    if ((i& (1<<k)) && statements[j][k] == 0){
                        flag = false;
                        break;
                    }
                    
                    else if (!(i& (1<<k)) && statements[j][k] == 1){
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if (flag) result = max(result, __builtin_popcount(i));
        }
        return result;
    }
};