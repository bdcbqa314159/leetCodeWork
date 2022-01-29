class Solution {
public:
    
    unordered_map<int, int> helper(vector<int>& nums){
        
        unordered_map<int, int> umap;
        
        for (const int& num:nums){
            
            if (umap.find(num) == umap.end()){
                umap[num]=1;
            }
            
            else{
                umap[num]++;
            }
        }
        return umap;
    }
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result{};
        
        unordered_map<int, int> umap1 = helper(nums1);
        unordered_map<int, int> umap2 = helper(nums2);
        
        unordered_map<int, int>::iterator it;
        
        for (it = umap1.begin(); it!=umap1.end(); it++){
            
            if (umap2.find(it->first) != umap2.end()){
                
                int no = min(umap1[it->first], umap2[it->first]);
                for (int i = 0; i<no; i++){
                    result.push_back(it->first);
                }
            }
            
        }
        
        return result;
        
        
    }
};