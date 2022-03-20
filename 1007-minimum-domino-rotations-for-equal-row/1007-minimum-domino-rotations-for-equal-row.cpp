class Solution {
public:
    int minDominoRotations(vector<int>& a, vector<int>& b) {
        int ans = INT_MAX;
        int x= 0, y = (a[0] == b[0] ? 0:1);
        
        for (int i = 1; i<a.size(); i++){
            if (a[i] != a[0] && b[i]!=a[0]){
                x = y = INT_MAX;
                break;
            }
            if (a[i] != a[0] && b[i]==a[0]) x++;
            if (b[i] != a[0] && a[i]==a[0]) y++;
        }
        
        ans = min(x, min(y,ans));
        x = 0;  y = (a[0] == b[0] ? 0:1);
        
        for (int i = 1; i<a.size(); i++){
            if (a[i] != b[0] && b[i]!=b[0]){
                x = y = INT_MAX;
                break;
            }
            if (a[i] != b[0] && b[i]==b[0]) y++;
            if (b[i] != b[0] && a[i]==b[0]) x++;
        }
        ans = min(x, min(y,ans));
        if (ans == INT_MAX) return -1;
        return ans;
        
    }
};