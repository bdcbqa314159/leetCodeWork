class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1, max_ = 0, area = 0;
        while (l<r){
            area = min(height[l], height[r])*(r-l);
            max_ = max(max_,area);
            
            if (height[l]<height[r])
                l++;
            else r--;
        }return max_;
    }
};