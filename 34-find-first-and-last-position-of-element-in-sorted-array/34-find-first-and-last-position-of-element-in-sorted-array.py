class Solution:
    
    def getLeft(self, nums: List[int], target: int) -> int:
        
        n = len(nums)
        l = 0
        r = n-1
        
        while(l<=r):
            mid = (l+r)//2
            
            if nums[mid] == target:
                if mid == 0 or mid-1>=0 and nums[mid-1]!=target:
                    return mid
                r = mid -1
            
            elif nums[mid]<target:
                l = mid+1
            
            else:
                r = mid -1
        
        return -1
            
    def getRight(self, nums: List[int], target: int) -> int:
        
        n = len(nums)
        l = 0
        r = n-1
        
        while(l<=r):
            mid = (l+r)//2
            
            if nums[mid] == target:
                if mid == n-1 or mid+1<n and nums[mid+1]!=target:
                    return mid
                l = mid +1
            
            elif nums[mid]<target:
                l = mid+1
            
            else:
                r = mid -1
        
        return -1
    

    
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l = self.getLeft(nums, target)
        r = self.getRight(nums, target)
        
        return [l,r]
        