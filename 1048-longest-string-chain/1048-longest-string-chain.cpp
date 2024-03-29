class Solution {
vector<vector<int>> edges;
vector<int> score;
int longest(int v){
    if (score[v]>0)
        return score[v];
    
    score[v]=1;
    for (int b: edges[v])
        score[v] = max(score[v], longest(b)+1);
    return score[v];
}
    
public:
    int longestStrChain(vector<string>& words) {
        const int n = words.size();
        edges.clear();
        edges.resize(n);
        score.clear();
        score.resize(n);
        
        unordered_map<string, int> his_position;
        for (int i = 0; i<n; i++)
            his_position[words[i]] = i;
        
        for (int i = 0; i<n; i++){
            string s = words[i];
            for (int j = 0; j<(int)s.size(); j++){
                string maybe = s.substr(0,j)+s.substr(j+1);
                auto it = his_position.find(maybe);
                
                if (it == his_position.end())
                    continue;
                edges[it->second].push_back(i);
            }
        }
        
        int answer = 0;
        for (int i = 0; i<n; i++){
            answer = max(answer, longest(i));
        }
        return answer;
    }
};