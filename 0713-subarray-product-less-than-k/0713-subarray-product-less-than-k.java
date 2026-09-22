class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
    int left = 0;
    int pro = 1;
    int count = 0;
    for(int i=0; i<nums.length; i++){

        if(k<=1) return 0;
        pro *= nums[i];

        while(pro>=k){
            pro = pro/nums[left];
            left++;
        }
        count += i - left+1;
    }  
    return count;  
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna