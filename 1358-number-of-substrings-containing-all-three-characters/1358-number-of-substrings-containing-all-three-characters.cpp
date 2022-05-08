class Solution {
public:
    int numberOfSubstrings(string s) {
        int total = 0;
        int j = 0;
        int n = s.size();
        vector<int>a(3);
        for (int i = 0; i<n; i++){
            if (a[0]>0 && a[1]>0 && a[2]>0){
                total+=(n-j+1);
                if (s[i]=='a') a[0]--;
                if (s[i]=='b') a[1]--;
                if (s[i]=='c') a[2]--;
                cout<<"in";
                continue;
            }
            if (j==n) break;
            while(j<n && (a[0]==0 || a[1]==0 || a[2] == 0)){
                if (s[j]=='a') a[0]++;
                if (s[j]=='b') a[1]++;
                if (s[j]=='c') a[2]++;
                j++;
            }
            if (a[0]>0 && a[1]>0 && a[2]>0){
                total += (n-j+1);
            }
            if (s[i]=='a') a[0]--;
            if (s[i]=='b') a[1]--;
            if (s[i]=='c') a[2]--;
        }
        return total;
    }
};