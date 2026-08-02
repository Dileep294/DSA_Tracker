class Solution {
public:
    vector<vector<int>> dp;
    int help(string& s,string& s1,int i,int j){
        if(i<0 || j<0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i]==s1[j]) return dp[i][j] = 1 + help(s,s1,i-1,j-1);
        else return dp[i][j] = max(help(s,s1,i-1,j),help(s,s1,i,j-1));
    }
    int longestPalindromeSubseq(string s) {
    int n = s.size();
    string s1 = s;
    reverse(s1.begin(),s1.end());
    dp.resize(n+1,vector<int>(n+1,-1));
    return help(s,s1,n-1,n-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna