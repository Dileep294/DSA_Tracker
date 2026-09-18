class Solution {
    int maxSubarraySum(int[] arr) {
        int maxx=Integer.MIN_VALUE;
        int sum=0;
        int n = arr.length;
        for(int i=0; i<n; i++){
            sum = Math.max(arr[i],sum+arr[i]);
            maxx = Math.max(sum,maxx);
        }
        return maxx;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna