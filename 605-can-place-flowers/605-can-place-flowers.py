class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        
        ans = [0]
        
        for x in flowerbed:
            ans.append(x)
        ans.append(0)
        
        for i in range(1, len(ans)-1):
            if (ans[i-1] == 0 and ans[i] == 0 and ans[i+1] == 0):
                ans[i] = 1
                n -= 1
        
        return n<=0
        