class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        vector<int> answer(2);
        
        while (l<r){
            int ans = numbers[l]+numbers[r];
            if (ans == target){
                answer[0] = l+1;
                answer[1] = r+1;
                break;
            }
            else if (ans<target) l++;
            else r--;
        }
        return answer;
    }
};