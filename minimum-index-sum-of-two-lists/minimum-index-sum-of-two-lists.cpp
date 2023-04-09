class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int> myMap;
        for (int i = 0; i<list1.size(); i++)
            myMap[list1[i]] = i;
        
        vector<string> result;
        int minSum = INT_MAX;
        
        for (int i = 0; i<list2.size(); i++){
            auto it = myMap.find(list2[i]);
            
            if (it == myMap.end()) continue;
            
            int idx = it->second + i;
            
            if (idx == minSum)
                result.push_back(list2[i]);
            
            if (idx < minSum){
                minSum = idx;
                result.clear();
                result.push_back(list2[i]);
            }
        }
        
        return result;
    }
};