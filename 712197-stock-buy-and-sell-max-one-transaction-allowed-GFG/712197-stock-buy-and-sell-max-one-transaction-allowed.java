class Solution {
    public int maxProfit(int[] prices) {
    int x = prices.length;
    int maxx=0;
    int buy=Integer.MAX_VALUE;
    int curr=0;
    for(int i=0; i<x; i++){
       buy = Math.min(buy,prices[i]);
       curr = prices[i]-buy;
       maxx = Math.max(curr,maxx);
    }
    return maxx;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna