class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> umap;
        for (auto j: jewels)
            umap[j]=0;
        for (auto s: stones){
            if (umap.find(s)!=umap.end())
                umap[s]++;
        }
        
        int sum = 0;
        for(auto x: umap)
            sum+=x.second;
        return sum;
    }
};