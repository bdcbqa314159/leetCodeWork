class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1, k = 0;
        
        while(i<=j){
            k = i+(j-i)/2;
            if (nums[k] == target) return k;
            else if (nums[k]<target) i = k+1;
            else j = k-1;
        }
        
        return -1;
    }
};