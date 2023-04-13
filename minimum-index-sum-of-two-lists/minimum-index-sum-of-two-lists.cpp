class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n = list1.size(), m = list2.size();
        map<string, int> mapping;
        vector<string> result;
        int minSum = INT_MAX;
        
        for (int i = 0; i<n; i++)
            mapping[list1[i]] = i;
        
        for (int j = 0; j<m; j++){
            auto it = mapping.find(list2[j]);
            
            if (it == mapping.end()) continue;
            
            int index = it->second+j;
            
            if (index == minSum) result.push_back(list2[j]);
            
            if (index<minSum){
                result.clear();
                minSum = index;
                result.push_back(list2[j]);
            }
        }
        return result;
    }
};