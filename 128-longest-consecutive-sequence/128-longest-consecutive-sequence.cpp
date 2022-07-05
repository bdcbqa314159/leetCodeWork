class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(), nums.end());
        int ans = 0;
        
        for (int i = 0; i<nums.size(); i++){
            if (nums_set.find(nums[i]) != nums_set.end()){
                nums_set.erase(nums[i]);
                int prev = nums[i]-1, next = nums[i]+1;
                while (nums_set.find(prev) != nums_set.end()) nums_set.erase(prev--);
                while (nums_set.find(next) != nums_set.end()) nums_set.erase(next++);
                ans = max(ans, next-prev-1);
            }
        }
        return ans;
    }
};