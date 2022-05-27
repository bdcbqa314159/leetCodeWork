class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0, n = s.size();
        if (n == 0) return ans;
        int l = 0, r = 0;
        unordered_map<char, int> umap;
        
        while (l<n && r<n){
            char e = s[r];
            if (umap.find(e) != umap.end())
                l = max(l, umap[e]+1);
            umap[e] = r;
            ans = max(ans, r-l+1);
            r++;
        }return ans;
        
    }
};