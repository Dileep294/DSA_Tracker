class Solution {
  public:
    bool dfs(vector<vector<int>>& adj,int u,vector<int>& color,int colour){
        color[u] = colour;
        for(int &v : adj[u]){
            if(color[v]==color[u]) return false;
            if(color[v]==-1){
                int colorofcur = 1 - colour;
                if(dfs(adj,v,color,colorofcur)==false) return false;
            }
        }
        return true;
    }
    bool isBipartite(int V, vector<vector<int>> &edges) {
    vector<vector<int>> adj(V);
    for(auto &edge : edges){
        int a = edge[0];
        int b = edge[1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> color(V,-1);
    for(int i=0; i<V; i++){
        if(color[i]==-1){
            if(dfs(adj,i,color,1)==false) return false;
        }
    }
    return true;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna