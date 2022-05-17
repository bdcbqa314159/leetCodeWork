class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int final = m+n-1;
        int i = n-1, j = m-1;
        
        while (i>=0 && j>=0){
            if (nums1[j]>nums2[i]){
                nums1[final] = nums1[j];
                final--;j--;
            }
            else{
                nums1[final]=nums2[i];
                final--; i--;
            }
        }
        while(i>=0){
            nums1[final] = nums2[i];
            final--;i--;
        }
    }
};