class Solution {
  public:
    bool dfs(vector<vector<int>>& adj, int u, vector<bool>& vis, int parent) {
        vis[u] = true;

        for (int v : adj[u]) {
            if (v == parent) continue;

            if (vis[v]) return true;

            if (dfs(adj, v, vis, u)) return true;
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
    vector<vector<int>> adj(V);
    for(auto edge : edges){
        int a = edge[0];
        int b = edge[1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
        vector<bool> vis(V, false);

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dfs(adj, i, vis, -1)) {
                    return true;
                }
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna