class Solution {
  public:
    void dfs(vector<vector<int>>& adj,int u,vector<bool>& vis,stack<int>& st){
        vis[u]=true;
        for(int &v : adj[u]){
            if(!vis[v]){
                dfs(adj,v,vis,st);
            }
        }
        st.push(u);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
    vector<vector<int>> adj(V);
    for(auto & edge : edges){
        int a = edge[0];
        int b = edge[1];
        adj[a].push_back(b);
    }
    vector<bool> vis(V,false);
    stack<int> st;
    for(int i=0; i<V; i++){
        if(!vis[i]){
              dfs(adj,i,vis,st);
            }
    }
    vector<int> res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna