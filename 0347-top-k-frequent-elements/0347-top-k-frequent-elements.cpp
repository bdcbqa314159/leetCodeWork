class Solution {
public:
    
    struct comp{
        inline bool operator()(const pair<int,int>&l, const pair<int,int>&r){
            return l.second>r.second;
        }
    };
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        vector<pair<int,int>> v;
        
        for (int x: nums) m[x]++;
        for (auto x: m)
            v.push_back(make_pair(x.first, x.second));
        sort(v.begin(), v.end(), comp());
        vector<int> result(k);
        for (int i = 0;i<k; i++)
            result[i] = v[i].first;
        return result;
    }
};