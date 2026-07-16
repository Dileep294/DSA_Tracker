class Solution {
public:
    int dfs(int i,int j,vector<vector<bool>>& vis,vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        if(i<0 || j<0 || j>=m || i>=n || grid[i][j]==0 || vis[i][j]){
            return 0;
        }
        vis[i][j] = true;
        int area=1;
        area += dfs(i-1,j,vis,grid);
        area += dfs(i,j-1,vis,grid);
        area += dfs(i+1,j,vis,grid);
        area += dfs(i,j+1,vis,grid);

        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> vis(n, vector<bool>(m, false));

    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<grid[0].size(); j++){
            if(!vis[i][j] && grid[i][j]==1){
                int area = dfs(i,j,vis,grid);
                ans = max(ans,area);
            }
        }
    }   
    return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna