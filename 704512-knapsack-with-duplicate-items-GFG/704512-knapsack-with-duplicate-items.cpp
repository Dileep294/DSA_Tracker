class Solution {
  public:
    vector<vector<int>> dp;
    int help(int c , vector<int>& val, vector<int>& wt,int i, int cw, int n){
        if(i==n) return 0;
        if(dp[i][cw] != -1) return dp[i][cw];
        if(cw+wt[i] > c) return dp[i][cw]=help(c,val,wt,i+1,cw,n);
        int take = val[i] + help(c,val,wt,i,cw+wt[i],n);
        int leave = help(c,val,wt,i+1,cw,n);
        return dp[i][cw]=max(take,leave);
    }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
    int n = val.size();
    dp.assign(n,vector<int>(capacity+1,-1));
    return help(capacity,val,wt,0,0,n);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna