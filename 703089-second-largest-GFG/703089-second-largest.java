class Solution {
    public int getSecondLargest(int[] arr) {
    int n = arr.length;
    int maxx = Integer.MIN_VALUE;
    int smax = Integer.MIN_VALUE;
    for(int i=0; i<n; i++){
        if(arr[i]>maxx){
            smax = maxx;
            maxx = arr[i];
        }
        else if(arr[i]>smax && arr[i]!=maxx){
            smax = arr[i];
        }
    }
    if(smax==Integer.MIN_VALUE) return -1;
    else return smax;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna