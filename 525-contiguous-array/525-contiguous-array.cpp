class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> umap;
        int sum{}, longest_subarray{};
        
        for (int i = 0; i<nums.size(); i++){
            
            sum += nums[i]==0 ? -1:1;
            
            if (sum == 0){
                if (longest_subarray < i+1)
                    longest_subarray = i+1;
            }
            
            else if (umap.find(sum)!=umap.end()){
                if (longest_subarray < i-umap[sum])
                    longest_subarray = i-umap[sum];
            }
            
            else
                umap[sum] = i;
        }
        
        return longest_subarray;
    }
};