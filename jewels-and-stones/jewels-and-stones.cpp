class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> umap;
        for (auto jewel: jewels)
            umap[jewel]=0;
        for (auto stone: stones){
            if (umap.find(stone)!=umap.end())
                umap[stone]++;
        }
        
        int sum = 0;
        for (auto item: umap)
            sum+=item.second;
        
        return sum;
    }
};