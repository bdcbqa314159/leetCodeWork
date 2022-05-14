class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        unordered_map<int,int> umap;
        int sum = 0, r = 0;
        
        for (int i = 0; i<nums.size(); i++){
            sum += nums[i] == 0 ? -1:1;
            if (sum == 0){
                if (r<i+1) r = i+1;
            }
            else if(umap.find(sum)!=umap.end()){
                if (r<i-umap[sum]) r = i-umap[sum];
            }
            
            else
                umap[sum] = i;
        }
        return r;
    }
};