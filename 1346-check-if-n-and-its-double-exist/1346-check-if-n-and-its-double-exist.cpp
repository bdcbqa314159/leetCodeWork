class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> umap;
        
        for (auto n: arr){
            if (n == 0){
                auto x = umap.find(n);
                if (x!=umap.end()) return true;
                else umap[n]++;
            }
            else{
                int doubleN = 2*n;
                if (n%2 == 0){
                    int midN = n/2;
                    auto x = umap.find(midN);
                    if (x!=umap.end()) return true;
                    else umap[n]++;
                }
                auto x = umap.find(doubleN);
                if (x!=umap.end()) return true;
                else umap[n]++;
            }
        }
        return false;
    }
};