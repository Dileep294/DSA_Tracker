class Solution {
    public int countSubarray(int[] arr, int k) {
    int left=0;
    int product=1;
    int count=0;
    for(int i=0; i<arr.length; i++){
        
        if(k<=1) return 0;
        
        product *= arr[i];
        
        while(product>=k){
            product = product/arr[left];
            left++;
        }
        count += i-left+1;
    }
    return count;  
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna