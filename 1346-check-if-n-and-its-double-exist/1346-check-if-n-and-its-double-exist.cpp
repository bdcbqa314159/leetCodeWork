class Solution {
public:
    
    bool helper(int i, unordered_map<int,int>& u){
        auto x = u.find(i);
        return x != u.end();
    }
    
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> umap;
        
        for (auto n: arr){
            if (n==0){
                if (helper(n,umap))
                    return true;
                umap[n]++;
            }
            else{
                int doubleN = 2*n;
                if (n%2 == 0){
                    if (helper(n/2,umap))
                        return true;
                    umap[n]++;
                }
                if (helper(doubleN, umap))
                    return true;
                umap[n]++;
            }
        }return false;
        
    }
};