class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n = list1.size(), p = list2.size();
        vector<string> result;
        
        int min_index = INT_MAX;
        map<string,int> m;
        
        for (int i = 0; i<n; i++)
            m[list1[i]] = i;
        
        for (int j = 0; j<p; j++){
            auto it = m.find(list2[j]);
            if (it == m.end()) continue;
            
            int index = it->second+j;
            
            if (index == min_index)
                result.push_back(list2[j]);
            if (index<min_index){
                min_index=index;
                result.clear();
                result.push_back(list2[j]);
            }
        }
        return result;
    }
};