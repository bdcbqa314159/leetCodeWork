class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int, vector<int>> map;
        for (auto p: pieces)
            map.insert({p[0], p});
        int idx = 0;
        while(idx<arr.size()){
            if (map.count(arr[idx])){
                auto piece = map[arr[idx]];
                for (int p:piece){
                    if (p!=arr[idx]) return false;
                    else idx++;
                }
            }else
                return false;
        }
        return true;
    }
};