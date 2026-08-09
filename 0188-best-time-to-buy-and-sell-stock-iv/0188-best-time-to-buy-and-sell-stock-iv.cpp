class Solution {
public:
    vector<vector<vector<int>>> dp;
    int a;
    int help(vector<int>& prices,int i,int hold,int k){
        if(i==prices.size() || k==a) return 0;
        if(dp[i][k][hold] != -1) return dp[i][k][hold];
        int notsell = help(prices,i+1,hold,k);
        int sell = 0;
        if(hold){
            sell = prices[i] + help(prices,i+1,0,k+1);
        }else{
            sell = -prices[i] + help(prices,i+1,1,k);
        }
        return dp[i][k][hold] = max(notsell,sell);
    }
    int maxProfit(int k, vector<int>& prices) {
    int n = prices.size();
    a=k;
    dp.resize(n, vector<vector<int>>(k,vector<int>(2,-1)));
    return help(prices,0,0,0);    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna