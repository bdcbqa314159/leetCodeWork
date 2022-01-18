class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict_ = dict();
        ans = [0,0];
        
        for i in range(len(nums)):
            goal = target-nums[i]
            if (goal in dict_):
                ans[0] = dict_[goal]
                ans[1] = i
                return ans
            dict_[nums[i]] = i
            
        return ans
        
        
        