class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        
        int left = 0, right = n-1, place = n-1, a{}, b{};
        
        vector<int> result(n,0);
        
        while(left<=right){
            
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