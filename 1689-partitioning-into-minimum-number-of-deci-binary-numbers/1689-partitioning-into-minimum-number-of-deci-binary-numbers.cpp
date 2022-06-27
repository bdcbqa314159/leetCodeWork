class Solution {
public:
    int minPartitions(string n) {
        int max_ = 0;
        for (auto c: n){
            max_ = max(max_, c-'0');
        }
        return max_;
    }
};