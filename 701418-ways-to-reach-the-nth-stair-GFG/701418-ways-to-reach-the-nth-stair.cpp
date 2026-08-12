class Solution {
  public:
    vector<int> dp;
    int help(int n){
        if(n==1) return 1;
        if(n==2) return 2;
        if(dp[n] != -1) return dp[n];
        return dp[n] = help(n-1)+help(n-2); 
    }
    int countWays(int n) {
    dp.assign(n+1,-1);
    return help(n);   
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna