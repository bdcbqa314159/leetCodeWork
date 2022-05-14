class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        unordered_map<int,int> umap;
        int r = 0, s = 0;
        
        for (int i = 0; i<nums.size(); i++){
            s += nums[i] == 0 ? -1:1;
            
            if (s == 0){
                if (r<i+1) r = i+1;
            }
            
            else if (umap.find(s) != umap.end()){
                if (r<i-umap[s]) r = i-umap[s];
            }
            else
                umap[s] = i;
        }
        
        return r;
    }
};