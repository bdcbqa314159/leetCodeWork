class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> result(nums.size());
        int left(0), right(nums.size()-1), place(nums.size()-1);
        
        while (left <= right){
            int a = nums[left]*nums[left];
            int b = nums[right]*nums[right];
            
            if (a <= b){
                result[place] = b;
                right--;
                place--;
            }
            
            else{
                result[place] = a;
                left++;
                place--;
            }
            
        }
        
        return result;
    
    }
};