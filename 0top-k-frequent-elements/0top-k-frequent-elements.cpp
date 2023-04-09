class Solution {
public:
    
    struct greater_than{
       inline bool operator()(const pair<int,int>& left, const pair<int,int>& right){
        return left.second>right.second;
    } 
    };
    
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        
        vector<pair<int,int>> v;
        
        for (int x: nums) m[x]+=1;
        
        for (auto x: m) v.push_back(make_pair(x.first,x.second));
        sort(v.begin(), v.end(), greater_than());
        
        vector<int> result;
        
        for (int i = 0; i<k; i++)
            result.push_back(v[i].first);
        return result;
    }
};