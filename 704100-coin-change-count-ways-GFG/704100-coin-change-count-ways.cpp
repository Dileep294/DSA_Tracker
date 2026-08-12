class Solution {
  public:
    vector<vector<int>> dp;
    int help(vector<int>& coins,int sum,int i){
        if(sum==0) return 1;
        if(sum<0 || i==coins.size()) return 0;
        if(dp[sum][i] != -1) return dp[sum][i];
        int same = help(coins,sum-coins[i],i);
        int notsame = help(coins,sum,i+1);
        
        return dp[sum][i]=same+notsame;
    }
    int count(vector<int>& coins, int sum) {
    int n = coins.size();
    dp.assign(sum+1,vector<int>(n,-1));
    return help(coins,sum,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna