class Solution {
  public:
    void helperdfs(int node,vector<vector<int>>& adj,vector<int>& vis,vector<int>& res){
        vis[node] = true;
        res.push_back(node);
        
        for(auto &it : adj[node]){
            if(!vis[it]){
                helperdfs(it,adj,vis,res);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> res;
    vector<int> vis(n,0);
    
    helperdfs(0,adj,vis,res);
    return res;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna