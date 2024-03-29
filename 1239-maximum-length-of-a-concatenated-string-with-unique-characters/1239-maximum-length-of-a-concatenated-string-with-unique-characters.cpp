class Solution {
public:
  int maxLength(vector<string>& arr) {
    vector<int> a;
    
    for (const string& x : arr) {
      int mask = 0;      
      for (char c : x) mask |= 1 << (c - 'a');
      if (__builtin_popcount(mask) != x.length()) continue;
      a.push_back(mask);
    }
    
    int ans = 0;
    
    vector<int> dp{0};
    for (int i = 0; i < a.size(); ++i) {
      int size = dp.size();
      for (int j = 0; j < size; ++j) {
        if (dp[j] & a[i]) continue;
        int t = dp[j] | a[i];        
        dp.push_back(t);
        ans = max(ans, __builtin_popcount(t));
      }
    }
    
    return ans;
  }
};