class Graph{
    
    public:
    vector<vector<pair<int,double>>> adj;
    int nNodes;
    void generateGraph(vector<vector<int>> & input, vector<double>& w, int n){
        nNodes = n;
        adj.resize(nNodes+1);
        for (int i = 0; i<input.size(); i++){
            adj[input[i][0]].push_back({input[i][1], w[i]});
            adj[input[i][1]].push_back({input[i][0], w[i]});
            
        }
    }
    
    void clear(){
        adj.clear();
    }
    
};

// pair<vector<int>, vector<int>> dijkstra(Graph g, int source){
double dijkstra(Graph g, int source, int target){
    priority_queue<pair<double,int>, vector<pair<double,int>>, greater<pair<double,int>>> minHeap;
    
    vector<double> dist(g.nNodes+1, 0);
    // vector<int> prev(g.nNodes+1, -1);
    vector<bool> visited(g.nNodes+1,false);
    dist[source]= -1;
    minHeap.push({-1, source});
    while (!minHeap.empty()){
        auto [curDist, curNode] = minHeap.top();
        minHeap.pop();
        if (curNode == target) break;
        if (visited[curNode]) continue;
        visited[curNode] = true;
        for (auto &[nextNode, nextWeight] : g.adj[curNode]){
            double nextDist = curDist*nextWeight;
            if (not visited[nextNode] && nextDist<dist[nextNode]){
                dist[nextNode] = nextDist;
                // prev[nextNode] = curNode;
                minHeap.push({nextDist, nextNode});
            }
        }
    }
    // return {dist,prev};
    return -dist[target];
    
} 

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        Graph g;
        g.generateGraph(edges, succProb, n);
        return dijkstra(g,start,end);
    }
};