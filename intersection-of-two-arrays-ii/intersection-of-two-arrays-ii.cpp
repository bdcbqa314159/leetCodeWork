class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        if (m>n) return intersect(nums2, nums1);
        unordered_map<int,int> umap;
        vector<int> ans;
        
        for (int i = 0; i<n; i++)
            umap[nums1[i]]++;
        for (int i = 0; i<m; i++){
            if (umap[nums2[i]] > 0){
                umap[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};