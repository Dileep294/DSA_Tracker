class Solution {
  public:
    vector<vector<int>> dp;
    int help(string &s1, string &s2,int i,int j){
        if(i==s1.size() || j==s2.size()) return 0;
        //int count = 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]){
          // count = count+1;
          return dp[i][j] = 1 + help(s1,s2,i+1,j+1);
        }
        else {
           return dp[i][j] = max(help(s1,s2,i+1,j),help(s1,s2,i,j+1));
        }
        
    }
    int lcs(string &s1, string &s2) {
    int n = s1.size();
    int m = s2.size();
    dp.assign(n+1,vector<int>(m+1,-1));
    return help(s1,s2,0,0);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna