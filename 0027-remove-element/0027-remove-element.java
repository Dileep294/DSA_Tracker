class Solution {
    public int removeElement(int[] nums, int val) {
    int n = nums.length;
    int a = 0;
    for(int i=0; i<n; i++){
        if(nums[i]!=val){
            nums[a]=nums[i];
            a++;
        }
    }    
    return a;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna