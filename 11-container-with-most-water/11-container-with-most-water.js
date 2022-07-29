/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let p1 = 0, p2 = height.length-1, curArea=0, area = 0;
    
    while (p1<p2){
        curArea = Math.min(height[p1], height[p2])*(p2-p1);
        area = Math.max(area, curArea);
        
        if (height[p1]<=height[p2]) p1++;
        else p2--;
    }
    return area;
};