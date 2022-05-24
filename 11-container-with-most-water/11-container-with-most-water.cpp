class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1, maxArea = 0, area = 0;
        while (l<r){
            int a = height[l], b = height[r];
            
            area = min(a,b)*(r-l);
            maxArea = max(maxArea, area);
            if (a<b)
                l++;
            else
                r--;
        }return maxArea;
    }
};