class Solution {
    public int[] productExceptSelf(int[] nums) {
    int n = nums.length;
    int[] pre = new int[n];
    int[] suf = new int[n];
    int temp = 1;
    for(int i=0; i<n; i++){
        pre[i] = temp;
        temp = nums[i]*temp;
    } 
    temp = 1;
    for(int i=n-1; i>=0; i--){
        suf[i] = temp;
        temp *= nums[i];
    }
    int[] ans = new int[n];
    for(int i=0; i<n; i++){
        ans[i] = pre[i]*suf[i];
    }   
    return ans;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna