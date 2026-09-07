class Solution {
    int help(int[] coins,int tar,int i,int[][] dp){
        if(tar==0) return 0;
        if(i == coins.length || tar<0){
            return Integer.MAX_VALUE;
        }
        if (dp[i][tar] != -1)
            return dp[i][tar];
        int take = help(coins,tar-coins[i],i,dp);
        int leave = help(coins,tar,i+1,dp);
        if(take != Integer.MAX_VALUE) take++;
        return dp[i][tar]=Math.min(take,leave);
    }
    public int coinChange(int[] coins, int amount) {
    int n = coins.length;
    int[][] dp = new int[n][amount+1];
    for (int[] row : dp) {
    Arrays.fill(row, -1);
    }
    int ans = help(coins,amount,0,dp);   
    return ans == Integer.MAX_VALUE ? -1 : ans; 
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna