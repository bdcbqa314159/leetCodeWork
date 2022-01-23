class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (s == "" || n == 0) return 0;
        
        unordered_map<char, int>umap;
        int l{}, r{}, ans{};
        char el{};
        
        while(l<n && r<n){
            
            el = s[r];
            
            if (umap.find(el) != umap.end()){
                l = max(l,umap[el]+1);
            }
            umap[el] = r;
            ans = max(ans, r-l+1);
            r++;
            
        }
        
        return ans;
        
    }
};