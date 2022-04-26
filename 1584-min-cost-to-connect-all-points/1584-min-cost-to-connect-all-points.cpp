class Solution {
public:
    int dis(vector<int>& point1, vector<int>& point2){
        return abs(point1[0]-point2[0])+abs(point1[1]-point2[1]);
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n  = points.size();
        vector<int> visited(n,0);
        vector<int> minCost(n,INT_MAX);
        int currPoint = 0;
        minCost[0] = 0;
        int ans = 0;
        while (currPoint>=0){
            visited[currPoint] = 1;
            int nextPoint = -1;
            int minCurr = INT_MAX;
            for (int point = 0; point<n; point++){
                if (visited[point]||currPoint==point)
                    continue;
                minCost[point] = min(dis(points[currPoint], points[point]), minCost[point]);
                if (minCost[point]<minCurr){
                    minCurr = minCost[point];
                    nextPoint = point;
                }
                    
            }
            if (minCurr == INT_MAX) ans+=0;
            else ans +=minCurr;
            currPoint = nextPoint;
        }
        return ans;
        
    }
};