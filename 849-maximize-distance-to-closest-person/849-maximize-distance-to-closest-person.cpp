class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
        int n = seats.size();
        int start = -1, maxgap = 0;
        
        for (int i = 0; i<n; i++){
            if (seats[i] == 1){
                if (start == -1){
                    maxgap = i;
                }
                else{
                    maxgap = max(maxgap, (i-start)/2);
                }
                start = i;
            }
        }
        
        maxgap = max(maxgap, n-1-start);
        return maxgap;
        
    }
};


// 