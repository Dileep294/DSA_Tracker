class Solution {
    public int maxProfit(int[] prices) {
    int n=prices.length;
    int ans=0;
    for(int i=1; i<n; i++){
        if(prices[i]>prices[i-1]){
            ans += prices[i]-prices[i-1];
        }
    }
    return ans;   
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna