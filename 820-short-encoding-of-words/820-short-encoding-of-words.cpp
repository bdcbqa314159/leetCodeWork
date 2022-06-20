class Solution {
public:
    
    static bool comp(string a, string b){
        return a.size()<b.size();
    }
    
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end(), comp);
        int ans = 0, count = 0;
        
        unordered_map<string, int> umap;
        
        for (int i = 0; i<words.size(); i++){
            string temp = "";
            for (int k = words[i].size()-1; k>=0; k--){
                temp = words[i][k]+temp;
                umap[temp]++;
            }
        }
        
        for (int i = 0; i<words.size(); i++){
            ans += words[i].size();
            count++;
            if (umap[words[i]]>1){
                ans -= words[i].size();
                count--;
                umap[words[i]]--;
            }
        }
        
        return ans+count;
        
    }
};