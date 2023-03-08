class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r =  *max_element(piles.begin(), piles.end());
        
        int res = r;
        
        while(l<=r){
            int k = r- (r-l)/2;
            
            int hours = 0;
            
            for (const auto& p: piles){
                
                int a = ceil(1.*p/k);
                
                hours += a;
                
            }
            
            if (hours<=h){
                res = min(res, k);
                r = k-1;
            }
            else l = k+1;
        }
        
        return res;
    }
};