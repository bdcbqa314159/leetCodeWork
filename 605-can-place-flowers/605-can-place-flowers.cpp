class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        vector<int> ans;
        ans.push_back(0);
        
        for (const auto& x: flowerbed){
            ans.push_back(x);
        }
        ans.push_back(0);
        
        for (int i = 1; i<ans.size()-1; i++){
            if ((ans[i-1] == 0)&&(ans[i]==0)&&(ans[i+1]==0)){
                n--;
                ans[i] = 1;
            }
                
        }
        
        return (n<=0);
    }
};