class Solution {
    public int maxSubArray(int[] nums) {
    int curr = 0;
    int maxx = Integer.MIN_VALUE;
    for(int x : nums){
        curr = Math.max(x,curr+x);
        maxx = Math.max(maxx,curr);
    } 
    return maxx;   
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna