class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        vector<int> ans(2);
        while (l<r){
            int sum = numbers[l]+numbers[r];
            if (target == sum){
                ans[0] = l+1;
                ans[1] = r+1;
                break;
            }
            else if(sum < target) l++;
            else r--;
        }
        return ans;
    }
};