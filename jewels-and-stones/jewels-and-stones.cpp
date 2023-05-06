class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> umap;
        for (int i = 0; i<jewels.size(); i++)
            umap[jewels[i]] = 0;
        
        for (int i = 0; i<stones.size(); i++){
            if (umap.find(stones[i])!=umap.end())
                umap[stones[i]]++;
        }
        
        int sum = 0;
        for (auto item: umap)
            sum+=item.second;
        
        return sum;
    }
};