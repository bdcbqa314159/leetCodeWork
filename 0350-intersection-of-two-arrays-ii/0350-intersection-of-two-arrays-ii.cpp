class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        if (m>n) return intersect(nums2, nums1);
        unordered_map<int,int> umap;
        vector<int> ans;
        
        for (auto x: nums1)
            umap[x]++;
        for (auto x: nums2){
            if (umap[x]>0){
                umap[x]--;
                ans.push_back(x);
            }
        }
        return ans;
    }
};