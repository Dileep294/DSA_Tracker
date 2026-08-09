class Solution {
public:
    vector<vector<vector<int>>> dp;
    int help(vector<int>& prices,int hold,int i,int count){
        if(i==prices.size() || count==2) return 0;
        if(dp[i][hold][count] != -1) return dp[i][hold][count];
        int notsell = help(prices,hold,i+1,count);
        int sell=0;
        if(hold){
            sell = prices[i] + help(prices,0,i+1,count+1);
        }
        else{
            sell = -prices[i] + help(prices,1,i+1,count);
        }
        return dp[i][hold][count] = max(notsell,sell);
    }
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    dp.resize(n,vector<vector<int>>(2,vector<int>(2,-1)));
    return help(prices,0,0,0);   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna