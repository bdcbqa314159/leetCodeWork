class Solution {
public:
    
    bool helper(int i, unordered_map<int,int>& u){
        return u.find(i)!=u.end();
    }
    
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> umap;
        for (int n: arr){
            if (n == 0){
                if (helper(n, umap)) return true;
                umap[n]++;
            }
            else{
                if (n%2 == 0){
                    if (helper(n/2, umap)) return true;
                    umap[n]++;
                }
                if (helper(2*n, umap)) return true;
                umap[n]++;
            }
        }return false;
    }
};