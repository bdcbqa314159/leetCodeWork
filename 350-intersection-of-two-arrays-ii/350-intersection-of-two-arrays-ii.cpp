class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        unordered_map<int,int> umap;
        for (int i = 0; i<n; i++){
            if (umap.find(nums1[i]) != umap.end())
                umap[nums1[i]]++;
            else
                umap[nums1[i]] = 1;
        }
        
        vector<int> ans;
        for (int i =0;i<m; i++){
            if (umap[nums2[i]] >0){
                umap[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
        
    }
};