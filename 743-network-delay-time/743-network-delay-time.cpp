class Graph{
    
    public:
    vector<vector<pair<int,int>>> adj;
    int nNodes;
    void generateGraph(vector<vector<int>> & input, int n){
        nNodes = n;
        adj.resize(nNodes+1);
        for (int i = 0; i<input.size(); i++){
            adj[input[i][0]].push_back({input[i][1], input[i][2]});
        }
    }
    
    void clear(){
        adj.clear();
    }
    
};

// pair<vector<int>, vector<int>> dijkstra(Graph g, int source){
vector<int> dijkstra(Graph g, int source){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
    
    vector<int> dist(g.nNodes+1, INT_MAX);
    // vector<int> prev(g.nNodes+1, -1);
    vector<bool> visited(g.nNodes+1,false);
    dist[source]= 0;
    minHeap.push({0, source});
    while (!minHeap.empty()){
        auto [curDist, curNode] = minHeap.top();
        minHeap.pop();
        if (visited[curNode]) continue;
        visited[curNode] = true;
        for (auto &[nextNode, nextWeight] : g.adj[curNode]){
            int nextDist = curDist+nextWeight;
            if (not visited[nextNode] && nextDist<dist[nextNode]){
                dist[nextNode] = nextDist;
                // prev[nextNode] = curNode;
                minHeap.push({nextDist, nextNode});
            }
        }
    }
    // return {dist,prev};
    return dist;
    
} 



class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        Graph g;
        g.generateGraph(times, n);
        vector<int> minTimes = dijkstra(g,k);
        
        int maxTime = 0;
        for (int i = 1; i<=n; i++){
            if (minTimes[i]== INT_MAX) return -1;
            maxTime = max(maxTime, minTimes[i]);
        }
        return maxTime;
    }
};