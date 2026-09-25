class Solution {
    public int findKRotation(int arr[]) {
    int n = arr.length;
    if(n==1) return 0;
    int count=1;
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]) count++;
        else break;
    }
    if(count==n) return 0;
    else return count;
        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna