class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        ans = 0
        if n == 0: return ans;
        l = r = 0
        umap = {}
        while l<n and r<n:
            e = s[r]
            if e in umap:
                l = max(l, umap[e]+1)
            ans = max(ans, r-l+1)
            umap[e] = r
            r+=1
        return ans