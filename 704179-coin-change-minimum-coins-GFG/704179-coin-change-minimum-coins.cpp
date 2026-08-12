class Solution {
  public:
    vector<vector<int>> dp;
    int help(vector<int> &coins,int sum,int i){
        if(sum==0) return 0;
        if(sum<0 || i==coins.size()) return INT_MAX;
        if(dp[sum][i] != -1) return dp[sum][i];
        int notake = help(coins,sum,i+1);
        int take = INT_MAX;
        if(coins[i]<=sum){
            int res = help(coins,sum-coins[i],i);
            
            if(res != INT_MAX) take = 1 + res;
        }
        return dp[sum][i]=min(take,notake);
        
    }
    int minCoins(vector<int> &coins, int sum) {
    int n = coins.size();
    dp.assign(sum+1,vector<int>(n,-1));
    int ans = help(coins,sum,0);   
    if(ans==INT_MAX) return -1;
    else return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna