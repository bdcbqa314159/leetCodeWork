class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        int count = 0;
        
        for (int i = 0; i<nums.size(); i++){
            int x = nums[i];
            if(umap[k-x]){
                umap[k-x]--;
                umap[x]--;
                count++;
            }
            umap[x]++;
        }
        return count;
    }
};