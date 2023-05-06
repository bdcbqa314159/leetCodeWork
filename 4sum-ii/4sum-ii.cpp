class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans = 0;
        unordered_map<int,int> umap;
        
        int l1 = nums1.size();
        int l2 = nums2.size();
        int l3 = nums3.size();
        int l4 = nums4.size();
        
        for (int x : nums1){
            for (int y: nums2){
                if (umap.find(x+y) == umap.end())
                    umap[x+y] = 1;
                else umap[x+y]++;
            }
        }
        
        for (int x : nums3){
            for (int y : nums4){
                int target = -(x+y);
                if (umap.find(target)!=umap.end())
                    ans+=umap[target];
            }
        }
        return ans;
    }
};