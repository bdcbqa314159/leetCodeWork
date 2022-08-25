class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> umap;
        for (auto x:arr){
            if (x == 0){
                auto m = umap.find(0);
                if (m!=umap.end()) return true;
                else umap[0]++;
            }
            else{
                int doubleX = x*2;
            cout<<x<<" double: "<<doubleX<<endl;
            if (x % 2 == 0){
                int midX = x/2;
                cout<<x<<" mid: "<<midX<<endl;
                auto m = umap.find(midX);
                if (m!=umap.end()) return true;
                else umap[x]++;
            } 
            
            auto M = umap.find(doubleX);
            if (M!=umap.end()) return true;
            else umap[x]++;
            }
            
        }
        return false;
    }
};