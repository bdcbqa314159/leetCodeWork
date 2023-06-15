class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        if n<2:
            return s
        
        l,r = 0,0
        dp = [[0]*n for i in range(n)]
        
        for j in range(1,n):
            for i in range(0,j):
                curr_palindrome = dp[i+1][j-1] or j-i<=2
                if s[i] == s[j] and curr_palindrome:
                    dp[i][j] = True
                    if j-i>r-l:
                        l, r = i, j
        return s[l:r+1]