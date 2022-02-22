class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result{};
        for (char c : columnTitle){
            int d = c-'A'+1;
            result = result*26+d;
        }
        return result;
    }
};