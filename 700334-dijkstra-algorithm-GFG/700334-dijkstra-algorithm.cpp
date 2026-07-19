class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
    vector<vector<pair<int,int>>> adj(V);
    for(auto &e : edges){
        int u = e[0];
        int v = e[1];
        int w = e[2];
        
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> res(V,INT_MAX);
    res[src] = 0;
    pq.push({0,src});
    while(!pq.empty()){
        
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        
        if(d > res[node]) continue;
        
        for(auto &vec : adj[node]){
            int adjNode = vec.first;
            int wt = vec.second;
            
            if(d + wt < res[adjNode]){
                res[adjNode] = d+wt;
                pq.push({d+wt,adjNode});
            }
        }
    }
    return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna