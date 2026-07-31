class Solution {
public:
    vector<vector<int>> dp;
    int help(vector<int>& coins,int amount,int i){
        if(i==coins.size()){
           if(amount==0) return 0;
           else return INT_MAX;
        }
        if(dp[i][amount] != -1) return dp[i][amount];

        if(amount-coins[i]<0) return dp[i][amount] = help(coins,amount,i+1);
        else{
            int take = help(coins, amount - coins[i], i);
            if (take != INT_MAX) take += 1;
            int ntake = help(coins,amount,i+1);
            return dp[i][amount] = min(take,ntake);
        } 
    }
    int coinChange(vector<int>& coins, int amount) {
    int n = coins.size();
    dp.resize(n,vector<int>(amount+1,-1));
    if(amount==0) return 0;
    int ans = help(coins,amount,0);   
    return (ans==INT_MAX) ? -1 : ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna