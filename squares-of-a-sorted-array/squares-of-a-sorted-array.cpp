class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(), l{}, r{n-1}, last{r}, a{}, b{};
        
        vector<int> answer(n);
        
        while (l<=r){
            a = nums[l]*nums[l];
            b = nums[r]*nums[r];
            
            if (a<b){
                answer[last] = b;
                
                r--;
            }
            
            else{
                answer[last] = a;
                
                l++;
            }
            last--;
        }
        return answer;
    }
};