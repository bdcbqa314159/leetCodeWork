/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let p1 = 0, p2 = height.length-1, maxArea = 0;
    
    while (p1<p2){
        const h = Math.min(height[p1], height[p2]);
        const w = (p2-p1);
        const area = h*w;
        maxArea = Math.max(area, maxArea);
        
        if (height[p1]<=height[p2]) p1++;
        else p2--;
    }
    return maxArea;
};