class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        umap = {}
        for i in range(n):
            diff = target - nums[i]
            if diff not in umap:
                umap[nums[i]] = i
            else: return [i, umap[diff]]
        return []
        