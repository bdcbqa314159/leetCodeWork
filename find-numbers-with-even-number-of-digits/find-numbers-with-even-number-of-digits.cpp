class Solution {
public:
    
    int noDigits(int n){
        int answer{};
        while(n!=0){
            n/=10;
            answer++;      
        }
        return answer;
    }
    
    int findNumbers(vector<int>& nums) {
        int answer = 0;
        for (auto num: nums){
            if (noDigits(num)%2 == 0)
                answer++;
        }
        return answer;
    }
};