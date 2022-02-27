class Solution {
public:
    
    unordered_map<int, int> helper(vector<int>& nums){
        unordered_map<int, int> result;
        int n = nums.size();
        
        for (int i = 0; i<n; i++){
            if (result.find(nums[i])!=result.end()){
                result[nums[i]]++;
            }
            
            else{
                result[nums[i]] = 1;
            }
        }
        return result;
    }
    

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result{};
        unordered_map<int,int> umap1 = helper(nums1);
        unordered_map<int,int> umap2 = helper(nums2);
        
        unordered_map<int,int>::iterator it;
        
        for(it = umap1.begin(); it!=umap1.end(); it++){
            if (umap2.find(it->first) != umap2.end()){
                int m = min(it->second, umap2[it->first]);
                
                for (int i = 0; i<m; i++){
                    result.push_back(it->first);
                }
            }
        }
        
        return result;
    }
};