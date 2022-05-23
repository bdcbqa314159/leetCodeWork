class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1, max_ = 0, area = 0;
        while (l<r){
            area = min(height[r], height[l])*(r-l);
            max_ = max(max_, area);
            if (height[r]>height[l]) l++;
            else r--;
        }
        return max_;
    }
};