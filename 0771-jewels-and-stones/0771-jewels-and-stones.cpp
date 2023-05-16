class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> umap;
        for (auto x: jewels)
            umap[x]=0;
        for (auto x: stones){
            if (umap.find(x)!=umap.end())
                umap[x]++;
        }
        int sum = 0;
        for (auto x: umap)
            sum+=x.second;
        return sum;
    }
};