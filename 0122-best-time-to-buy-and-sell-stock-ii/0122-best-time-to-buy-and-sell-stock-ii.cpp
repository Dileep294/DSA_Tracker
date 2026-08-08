class Solution {
public:
    vector<vector<int>> dp;
    int help(vector<int>& prices,int hold,int i){
        if(i==prices.size()) return 0;
        if(dp[i][hold]!=-1) return dp[i][hold];
        int notsell = help(prices,hold,i+1);
        int sell = 0;
        if(hold==1){
            sell = prices[i] + help(prices,0,i+1);
        }else{
            sell = -prices[i] + help(prices,1,i+1);
        }
        return dp[i][hold]=max(notsell,sell);
    }
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    dp.resize(n+1,vector<int>(2,-1));
    return help(prices,0,0);    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna