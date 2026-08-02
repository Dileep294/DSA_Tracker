class Solution {
public:
    vector<vector<int>> dp;
    int help(string& s1,string& s2,int i, int j){
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) return dp[i][j] = help(s1,s2,i-1,j-1);
        else return dp[i][j] =1 + min(help(s1,s2,i-1,j-1),min(help(s1,s2,i-1,j),help(s1,s2,i,j-1)));
    }
    int minDistance(string word1, string word2) {
    int n = word1.size();
    int m = word2.size();
    dp.resize(n+1,vector<int>(m+1,-1));
    return help(word1,word2,n-1,m-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna