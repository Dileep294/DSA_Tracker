class Solution {
    public int maxOnes(int arr[], int k) {
    int left=0;
    int maxx=0;
    for(int right=0; right<arr.length; right++){
        if(arr[right]==0) k--;
        
        while(k<0){
            if(arr[left]==0){
                k++;
            }
            left++;
        }
        maxx=Math.max(maxx,right-left+1);
    }
    return maxx;
}
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna