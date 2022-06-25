class Solution:
    def checkPossibility(self, nums: List[int]) -> bool:
        counter = 0
    
        for i in range(1, len(nums)):
            if (nums[i]<nums[i-1]):
                if(i==1 or nums[i-2] <= nums[i]):
                    nums[i-1] = nums[i]
                    counter += 1
                else:
                    nums[i] = nums[i-1]
                    counter += 1
        return (counter <= 1)
        