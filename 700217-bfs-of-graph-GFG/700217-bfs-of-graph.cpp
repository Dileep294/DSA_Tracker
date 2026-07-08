class Solution {
  public:
    void helperbfs(int node,vector<vector<int>> &adj,vector<int>& res,vector<int>& visited){
        queue<int> q;
        q.push(node);
        visited[node] = 1;
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            res.push_back(u);
            for(auto &v : adj[u]){
                if(!visited[v]){
                    visited[v]=1;
                    q.push(v);
                }
            }
            
        }
    }
    vector<int> bfs(vector<vector<int>> &adj) {
    int n = adj.size();
    vector<int> res;
    vector<int> visited(n, 0);
    
    helperbfs(0,adj,res,visited);
    return res;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna