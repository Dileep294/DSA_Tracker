class Solution {
public:
    vector<vector<int>> dp;
    int help(vector<vector<int>>& grid,int i,int j, int n, int m){
        if(i==n-1 && j==m-1) return 1;
        if(i>=n || j>=m || grid[i][j]==1) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = help(grid,i+1,j,n,m) + help(grid,i,j+1,n,m);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    if(grid[0][0]==1 || grid[n-1][m-1]==1) return 0;
    dp.resize(n,vector<int>(m,-1));
    return help(grid,0,0,n,m);    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna