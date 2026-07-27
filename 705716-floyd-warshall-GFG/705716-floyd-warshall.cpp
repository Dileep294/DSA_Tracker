class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        int n=dist.size();
        int m = dist[0].size();
        for(int k=0; k<n; k++){
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(dist[i][k]==1e8 || dist[k][j]==1e8) continue;
                    dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna