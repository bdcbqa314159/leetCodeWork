class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int sum_gas = accumulate(gas.begin(), gas.end(), 0);
        int sum_cost = accumulate(cost.begin(), cost.end(), 0);
        
        if (sum_gas < sum_cost) return -1;
        
        int total = 0;
        
        int res = 0;
        
        for (int i = 0; i<gas.size(); i++){
            total+=(gas[i]-cost[i]);
            
            if (total<0){
                total = 0;
                res = i+1;
            }
        }
        
        return res;
    }
};