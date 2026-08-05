class Solution {
public:
    vector<int> dp;
    int help(int i){
        if(i<=2) return i;
        if(dp[i]!=-1) return dp[i];
        return dp[i] = help(i-1) + help(i-2);
    }
    int climbStairs(int n) {
    dp.resize(n+1,-1);
    return help(n);    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna