class Solution {
  public:
    bool isCycle(vector<vector<int>>& adj,int u,vector<bool>& vis,vector<bool>& currVis){
        vis[u] = true;
        currVis[u] = true;
        for(int &v : adj[u]){
            if(!vis[v]){
                if(isCycle(adj,v,vis,currVis)) return true;
            }
            else if(currVis[v]==true) return true;
        }
        currVis[u]=false;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
    vector<vector<int>> adj(V);
    for(auto edge : edges){
        int a = edge[0];
        int b = edge[1];
        adj[a].push_back(b);
    }
    vector<bool> vis(V,false);
    vector<bool> currVis(V,false);
    for(int i=0; i<V; i++){
        if(!vis[i]){
             if(isCycle(adj,i,vis,currVis)) return true;
        }
    }
    return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna