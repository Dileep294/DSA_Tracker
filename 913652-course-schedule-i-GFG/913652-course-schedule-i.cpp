class Solution {
  public:
    bool dfs(vector<vector<int>>& adj,int u, vector<bool>& vis,vector<bool>& currVis){
        vis[u] = true;
        currVis[u] = true;
        
        for(int &v : adj[u]){
            if(!vis[v]){
                if(dfs(adj,v,vis,currVis)) return true;
            }
            else if(currVis[v]) return true;
        }
        currVis[u] = false;
        return false;
    } 
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
    vector<vector<int>> adj(n);
    for(auto &it : prerequisites){
        int a = it[0];
        int b = it[1];
        adj[b].push_back(a);
    }
    vector<bool> vis(n,false);
    vector<bool> currVis(n,false);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            if(dfs(adj,i,vis,currVis)) return false;
        }
    }
    return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna