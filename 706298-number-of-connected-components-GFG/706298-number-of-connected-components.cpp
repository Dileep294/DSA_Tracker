class Solution {
  public:
    int dfs(vector<vector<int>>& adj,int u,vector<bool>& vis){
        vis[u] = true;
        for(int &v : adj[u]){
            if(!vis[v]){
                dfs(adj,v,vis);
            }
        }
        
    }
    int countConnected(int V, vector<vector<int>>& edges) {
    vector<vector<int>> adj(V);
    for(auto &edge : edges){
        int a = edge[0];
        int b = edge[1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> vis(V,false);
    int count=0;
    for(int i=0; i<V; i++){
        if(!vis[i]){
            count++;
            dfs(adj,i,vis);
            
        }
    }
    return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna