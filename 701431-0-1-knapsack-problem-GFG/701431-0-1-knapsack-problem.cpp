class Solution {
  public:
    vector<vector<int>> dp;
    int help(int w,vector<int>& val,vector<int>& wt,int i,int cw,int n){
        if(i==n) return 0;
        if(dp[i][cw] != -1) return dp[i][cw];
        if(cw + wt[i] > w) return help(w,val,wt,i+1,cw,n);
        int take = val[i] + help(w,val,wt,i+1,cw+wt[i],n);
        int leave = help(w,val,wt,i+1,cw,n);
        return dp[i][cw] = max(take,leave);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
    int n = val.size();
    dp.assign(n,vector<int>(W+1,-1));
    return help(W,val,wt,0,0,n);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna