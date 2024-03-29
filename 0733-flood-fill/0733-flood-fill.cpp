class Solution {
public:
    
    void fill(vector<vector<int>>& image, int sr, int sc, int color, int newColor){
        int n = image.size(), m = image[0].size();
        if (sr<0||sc<0||sr>=n||sc>=m||image[sr][sc]!=color) return;
        image[sr][sc] = newColor;
        fill(image, sr-1, sc, color, newColor);
        fill(image, sr, sc-1, color, newColor);
        fill(image, sr+1, sc, color, newColor);
        fill(image, sr, sc+1, color, newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        fill(image, sr, sc, image[sr][sc], color);
        return image;
    }
};