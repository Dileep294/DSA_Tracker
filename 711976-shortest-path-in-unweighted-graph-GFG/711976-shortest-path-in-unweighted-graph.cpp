class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
    vector<vector<int>> adj(V);
    for(auto &edge : edges){
        int u = edge[0];
        int v = edge[1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> q;
    int ans = 0;
    q.push(src);
    vector<int> dist(V, -1);
    dist[src] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        
        if(u==dest) return dist[u];
        
        for(int &v : adj[u]){
            if(dist[v]==-1){
                dist[v] = dist[u]+1;
                q.push(v);
            }
        }
    }
    return -1;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna