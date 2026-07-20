class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        vector<vector<pair<int,int>>> adj(V+1);
        for(auto &edge : edges){
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        // CHANGE 1: We no longer track a parent array during Dijkstra.
        // Parent pointers only remember ONE path per node — whichever edge
        // relaxed it first — which is not necessarily the lexicographically
        // smallest one when several shortest paths of equal length exist.
        // vector<int> par(V+1);   <-- removed

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> ans(V+1, INT_MAX);

        // CHANGE 2: Run Dijkstra from `dest` instead of `src`.
        // Since the graph is undirected, dist(dest -> x) == dist(x -> dest)
        // for every x, so this gives us, for every node, its distance to dest.
        // We need that (not distance from src) to do the forward greedy walk below.
        ans[dest] = 0;
        pq.push({0, dest});

        while(!pq.empty()){
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if(d != ans[node]) continue;

            for(auto &vec: adj[node]){
                int adjNode = vec.first;
                int wt = vec.second;

                if(d + wt < ans[adjNode]){
                    ans[adjNode] = d + wt;
                    pq.push({ans[adjNode], adjNode});
                    // CHANGE 3: no par[adjNode] = node; assignment anymore
                }
            }
        }

        if(ans[src] == INT_MAX) return {-1};

        // CHANGE 4: Reconstruct the path by walking FORWARD from src to dest,
        // greedily choosing, at each step, the smallest-numbered neighbor that
        // still lies on a shortest path (i.e. ans[current] == wt + ans[neighbor]).
        // Because we always pick the smallest valid next vertex, and lexicographic
        // order is decided by the first position where two sequences differ,
        // this greedy forward choice produces the overall lexicographically
        // smallest path — something the old parent-pointer method could not guarantee.
        vector<int> path;
        int node = src;
        path.push_back(node);

        while(node != dest){
            int next = -1;
            for(auto &vec : adj[node]){
                int adjNode = vec.first;
                int wt = vec.second;
                if(ans[node] == wt + ans[adjNode]){
                    if(next == -1 || adjNode < next){
                        next = adjNode;
                    }
                }
            }
            node = next;
            path.push_back(node);
        }

        return path;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna