class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int final = m+n-1;
        while(n>0 && m>0){
            if (nums1[m-1]>nums2[n-1]){
                nums1[final] = nums1[m-1];
                final--; m--;
            }
            else{
                nums1[final] = nums2[n-1];
                final--;n--;
            }
        }
        while (n>0){
            nums1[final] = nums2[n-1];
            final--; n--;
        }
    }
};