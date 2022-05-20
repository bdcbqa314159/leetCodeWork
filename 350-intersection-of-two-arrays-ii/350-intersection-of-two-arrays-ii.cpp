class Solution {
public:
    
    unordered_map<int,int> helper(vector<int>& x){
        unordered_map<int,int> fx;
        for (int i = 0; i<x.size(); i++){
            if (fx.find(x[i]) != fx.end()) fx[x[i]]++;
            else 
                fx[x[i]] = 1;
        }
        return fx;
    }
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums2.size() > nums1.size())
            return intersect(nums2, nums1);
        unordered_map<int,int> umap = helper(nums1);
        vector<int> z;
        for (int i = 0; i<nums2.size(); i++){
            if (umap[nums2[i]]>0){
                z.push_back(nums2[i]);
                umap[nums2[i]]--;
            }
        }
    
        return z;
    }
};