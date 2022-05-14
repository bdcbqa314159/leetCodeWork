class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        unordered_map<int,int> umap;
        
        int sum = 0, res = 0;
        for (int i = 0; i<nums.size(); i++){
            sum += nums[i] ? -1:1;
            if (sum == 0){
                if (res < i+1) res = i+1;
            }
            
            else if (umap.find(sum) != umap.end()){
                if (res<i-umap[sum]) res = i-umap[sum];
            }
            
            else
                umap[sum] = i;
        }
        return res;
    }
};