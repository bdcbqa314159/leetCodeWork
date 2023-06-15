class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        if n<2:
            return s
        l,r = 0,0
        dp = [[0]*n for i in range(n)]
        
        for j in range(1,n):
            for i in range(0,j):
                current_Palindrome = dp[i+1][j-1] or j-i<=2
                if s[i] == s[j] and current_Palindrome:
                    dp[i][j] = True
                    if j-i > r-l:
                        l = i
                        r = j
        return s[l:r+1]
        