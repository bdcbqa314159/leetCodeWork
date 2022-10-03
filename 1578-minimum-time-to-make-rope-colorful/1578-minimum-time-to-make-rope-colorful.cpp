class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        for (int i = 0; i<neededTime.size(); i){
            int j = i;
            int max_index = i;
            int max_ = neededTime[i];
            
            while(j<colors.size() && colors[i]==colors[j]){
                if (neededTime[j]>max_){
                    max_index = j;
                    max_ = neededTime[j];
                }
                j++;
            }
            int sum = 0;
            for (int k = i; k<j; k++){
                if (k!=max_index)
                    sum+=neededTime[k];
            }
            ans+=sum;
            i = j;
        }
        return ans;
    }
};