class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> umap1;
        unordered_map<string, char> umap2;
        
        stringstream s(str);
        string word;
        
        int n = pattern.size(), i=0;
        
        while(s>>word){
            if(i == n) return false;
            
            char c = pattern[i];
            if(umap1.count(c) != umap2.count(word)) return false;
            
            if(umap1.count(c)){
                if((umap2[word]!=c) || (umap1[c] != word)) return false;
                
            }else{
                    umap1.insert({c, word});
                    umap2.insert({word, c});
            }
            
            i++;
            
        }
        
        return (i==n);
    }
};