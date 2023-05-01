class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size(), mean=0;
        sort(salary.begin(), salary.end());
        for (int i = 1; i<n-1; i++) mean+=salary[i];
        return 1.*mean/(n-2);
    }
};