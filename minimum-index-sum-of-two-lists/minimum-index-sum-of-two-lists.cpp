class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n = list1.size(), m = list2.size();
        map<string, int> map_;
        int minSum = INT_MAX;
        vector<string> result;
        
        for (int i = 0; i<n; i++)
            map_[list1[i]] = i;
        
        for (int j = 0; j<m; j++){
            auto it = map_.find(list2[j]);
            if (it == map_.end()) continue;
            
            int index = it->second+j;
            if (index == minSum) result.push_back(list2[j]);
            if (index<minSum){
                minSum = index;
                result.clear();
                result.push_back(list2[j]);
            }
         }
        return result;
    }
};