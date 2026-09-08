class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
    int n = text1.length();
    int m = text2.length();
    int[][]  dp = new int[n+1][m+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            char ch = text1.charAt(i-1);
            char sh = text2.charAt(j-1);
            if(ch==sh) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = Math.max(dp[i][j-1],dp[i-1][j]);
        }
    }  
    return dp[n][m];
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna