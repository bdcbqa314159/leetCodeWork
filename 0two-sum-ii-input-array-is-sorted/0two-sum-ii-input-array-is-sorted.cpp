class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l{}, r = numbers.size()-1;
        
        while (l<r){
            int ans = numbers[l]+numbers[r];
            if (ans == target)
                return {l+1, r+1};
            else if(ans<target) l++;
            else r--;
        }
        return {};
    }
};