class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int m = 0, n = 0;
        while(i<j){
            n = min(height[j], height[i])*(j-i);
            m = max(m, n);
            height[j]>height[i]?i++:j--;
        }
        return m;
    }
};