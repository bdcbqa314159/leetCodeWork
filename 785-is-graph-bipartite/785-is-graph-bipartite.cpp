class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colorarr(n, -1);
        queue<int>q;
        for (int i = 0; i<n; i++){
            if(colorarr[i]==-1){
                q.push(i);
                colorarr[i]=0;
                while(!q.empty()){
                    int it = q.front();
                    q.pop();
                    int color = colorarr[it];
                    for (auto its:graph[it]){
                        if(colorarr[it]==colorarr[its]) return false;
                        if(colorarr[its]==-1){
                            q.push(its);
                            colorarr[its] = !color;
                        }
                    }
                }
            }
        }
        return true;
    }
};