class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int left = 0;
        int right = nums.size()-1;
        vector<int> result(right+1);
        int place = right;
        
        int a{}, b{};
        
        
        while(left <=right){
            a = nums[left]*nums[left];
            b = nums[right]*nums[right];
            
            if (a<=b){
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