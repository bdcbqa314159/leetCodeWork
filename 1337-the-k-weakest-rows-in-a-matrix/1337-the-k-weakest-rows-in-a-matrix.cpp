class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        set<pair<int,int>> store;
        
        for (int i = 0; i<n; i++){
            int s = 0;
            for (int j = 0; j<m; j++)
                s+=mat[i][j];
            store.insert({s,i});
        }
        vector<int> ans;
        for (auto it:store){
            if (k==0) break;
            ans.push_back(it.second);
            k--;
        }
        
        return ans;
    }
};
