bool comp(vector<int> &a, vector<int> &b){
    return a[1]>b[1];
}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comp);
        
        int i = 0, ans = 0;
        while(truckSize>0 && i<boxTypes.size()){
            if (boxTypes[i][0]>0){
                ans+=boxTypes[i][1];
                truckSize--;
                boxTypes[i][0]--;
            }
            else
                i++;
        }
        return ans;
    }
};