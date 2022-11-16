class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> umap;
        for (auto num: arr){
            if (num == 0){
                auto x = umap.find(num);
                if (x != umap.end())
                    return true;
                else umap[num]++;
            }
            else{
                int doubleNum = 2*num;
                if (num%2 == 0){
                    int midNum = num/2;
                    auto x = umap.find(midNum);
                    if (x != umap.end())
                        return true;
                    else umap[num]++; 
                }

                auto x = umap.find(doubleNum);
                if (x != umap.end()) return true;
                else umap[num]++;
            }
        }
        return false;
    }
};