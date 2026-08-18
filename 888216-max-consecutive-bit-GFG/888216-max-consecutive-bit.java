class Solution {
    public int maxConsecBits(int[] arr) {
    int n = arr.length;
    int count=1;
    int maxx=1;
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            count++;
            maxx = Math.max(count,maxx);
        }
        else count=1;
    }
    return maxx;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna