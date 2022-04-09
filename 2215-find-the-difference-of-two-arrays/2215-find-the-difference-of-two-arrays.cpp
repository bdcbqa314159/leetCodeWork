class Solution {
public:
    unordered_map<int,int> helper(vector<int>&nums){
        unordered_map<int,int> umap;
        for (int i = 0; i<nums.size(); i++){
            if (umap.find(nums[i])==umap.end()){
                umap[nums[i]]=1;
            }
        }
        return umap;
    }
    
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> u = helper(nums1), v = helper(nums2);
        vector<vector<int>> out;
        vector<int> a{};
        unordered_map<int,int>::iterator it = u.begin();
        for (it; it!=u.end(); it++){
            if (v.find(it->first)==v.end())
                a.push_back(it->first);
        }
        out.push_back(a);
        a.clear();
        it = v.begin();
        for (it; it!=v.end(); it++){
            if (u.find(it->first)==u.end())
                a.push_back(it->first);
        }
        out.push_back(a);
        a.clear();
        return out;
    }
};