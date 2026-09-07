class Solution {
    public int[] searchRange(int[] nums, int target) {
    int n = nums.length;
    int lo = 0;
    int hi = n-1;
    int fir=-1;
    int las=-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(nums[mid]==target){
            fir = mid;
            hi = mid-1;
        }
        else if(target<nums[mid]) hi = mid-1;
        else lo = mid+1;
    } 
    lo = 0;
    hi = n - 1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(nums[mid]==target){
            las = mid;
            lo = mid+1;
        }
        else if(target<nums[mid]) hi = mid-1;
        else lo = mid+1;
    }
    return new int[]{fir,las};  
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna