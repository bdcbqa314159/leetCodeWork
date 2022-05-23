class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1, max_ = 0, area = 0;
        while (l<r){
            area = min(height[r],height[l])*(r-l);
            max_ = max(area, max_);
            height[r]>height[l]?l++:r--;
        }return max_;
    }
};