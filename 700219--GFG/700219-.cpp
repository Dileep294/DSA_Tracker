class Solution {
  public:
    bool isCyclebfs(vector<vector<int>>& adj,int u,vector<bool>& visited,int parent){ 
        visited[u] = true;
        for(int &v : adj[u]){
            if(v==parent) continue;
            if(visited[v]) return true;
            if(isCyclebfs(adj,v,visited,u)){
                return true; 
            } 
        }
        return false;
        }
    bool isCycle(int V, vector<vector<int>>& edges) {
    vector<vector<int>> adj(V);
    for(auto edge : edges){
        int a = edge[0];
        int b = edge[1];
        adj[a].push_back(b); adj[b].push_back(a);
        } 
        vector<bool> visited(V,false);
        for(int i=0; i<V; i++){
            if(!visited[i] && isCyclebfs(adj,i,visited,-1)){
                return true;
            } 
        }
     return false;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna