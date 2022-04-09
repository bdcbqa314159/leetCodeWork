class Solution {
public:
    
    vector<int> helper(vector<int>& x, vector<int>& y){
        vector<int> z(2,0);
        z[0] = y[0]-x[0]; z[1] = y[1]-x[1];
        return z;
    }
    
    bool helper1(vector<int>& x, vector<int>& y){
        return (x[0]*y[1] - x[1]*y[0] == 0);
    }
    
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() == 2) return true;
        vector<int> u = helper(coordinates[0], coordinates[1]);
        
        for (int i = 2; i<coordinates.size(); i++){
            vector<int> v = helper(coordinates[0], coordinates[i]);
            if (!helper1(u,v)) return false;
        }
        return true;
    }
};

