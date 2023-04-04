class Solution
{
public:
    int partitionString(string s)
    {
        int n=s.size();
        int ans=1;
        map<char,int> m;
        for(auto x:s){
            if(m[x]>0){
                ans++;
                m.clear();
                m[x]++;
            }
            else{
                m[x]++;
            }
        }
        return ans;
    }
};