class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string res = to_string(n);
        sort(res.begin(), res.end());

        for (int i = 0; i<32; i++){
            string s1 = to_string(1<<i);
            sort(s1.begin(), s1.end());
            if (res == s1) return true;
        }
        return false;
    }
};