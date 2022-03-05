class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        
        int left = 0;
        int right = n-1;
        int last = n-1;
        
        int a{}, b{};
        
        vector<int> result(n,0);
        
        while(left<=right){
            
            a = nums[left]*nums[left];
            b = nums[right]*nums[right];
            
            if (a<=b){
                result[last] = b;
                last--;
                right--;
            }
            
            else{
                result[last] = a;
                last--;
                left++;
            }
            
        }
        
        return result;
        
    }
};