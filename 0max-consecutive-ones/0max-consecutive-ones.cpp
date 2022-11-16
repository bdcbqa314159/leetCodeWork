class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int index{}, current_max{}, answer{};
        while (index<nums.size()){
            if (nums[index] == 1){
                current_max++;
                answer = max(answer, current_max);
            }
            else current_max = 0;
            index++;
        }
        return answer;
    }
};