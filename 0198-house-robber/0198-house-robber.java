class Solution {
    int help(int[] nums,int i,int[] dp){
        if(i>nums.length-1) return 0;
        if(dp[i]!=-1) return dp[i];
        int take = nums[i] + help(nums,i+2,dp);
        int leave = help(nums,i+1,dp);
        return dp[i] = Math.max(take,leave);
    }
    public int rob(int[] nums) {
    int n = nums.length;
    int[] dp = new int[n];
    for(int i=0; i<n; i++){
        dp[i]=-1;
    }
    return help(nums,0,dp);   
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna