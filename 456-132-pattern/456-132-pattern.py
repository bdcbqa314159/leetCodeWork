class Solution:
    def find132pattern(self, nums: List[int]) -> bool:
        N = len(nums)
        stack, third = [], float('-inf')
        
        for i in range(N-1,-1,-1):
            if nums[i]<third: return True
            while stack and stack[-1]<nums[i]:
                third = stack.pop()
                
            stack.append(nums[i])
            
        return False