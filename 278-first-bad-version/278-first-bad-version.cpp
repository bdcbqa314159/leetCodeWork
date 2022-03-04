// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int left = 1;
        int right = n;
        
        while(left <= right){
            int med = left + (right-left)/2;
            
            if (isBadVersion(med)) right = med-1;
            
            else left = med +1;
        }
        
        return left;
        
    }
};