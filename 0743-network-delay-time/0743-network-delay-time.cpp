class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<vector<pair<int,int>>> adj(n+1);
    for(auto &it : times){
        int u = it[0];
        int v = it[1];
        int w = it[2];
        adj[u].push_back({v,w});
    }   
    priority_queue<pair<int,int>, vector<pair<int , int>>, greater<pair<int , int>>> pq;
    vector<int> res(n+1,INT_MAX);
    res[k] = 0;
    pq.push({0,k});
    while(!pq.empty()){
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if(d > res[node]) continue;

        for(auto &vec : adj[node]){
            int adjNode = vec.first;
            int dist = vec.second;

            if(d+dist < res[adjNode]){
                res[adjNode] = d+dist;
                pq.push({d+dist,adjNode});
            }
        }
    }
    int ans=0;
    for(int i=1; i<=n; i++){
        if(res[i] == INT_MAX) return -1;
         ans = max(res[i],ans);
    }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna