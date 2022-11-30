class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> umap1;
        for (auto n: arr){
            auto x = umap1.find(n);
            if (x != umap1.end()) umap1[n]++;
            else umap1[n] = 1;
        }
        unordered_map<int, int> umap2;
        for (auto x: umap1){
            auto y = umap2.find(x.second);
            if (y!=umap2.end()) return false;
            else umap2[x.second]=1;
        }
        return true;
    }
};