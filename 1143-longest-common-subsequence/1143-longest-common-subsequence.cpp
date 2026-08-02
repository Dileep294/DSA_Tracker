class Solution {
public:
    vector<vector<int>> dp;
    int help(string& t1,string& t2, int i,int j){
        if(i<0 || j<0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(t1[i]==t2[j]) return dp[i][j] = 1 + help(t1,t2,i-1,j-1);
        else return dp[i][j] = max(help(t1,t2,i-1,j),help(t1,t2,i,j-1));
    }
    int longestCommonSubsequence(string text1, string text2) {
    int n = text1.size();
    int m = text2.size();
    dp.resize(n+1,vector<int>(m+1,-1));
    return help(text1,text2,n-1,m-1);    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna