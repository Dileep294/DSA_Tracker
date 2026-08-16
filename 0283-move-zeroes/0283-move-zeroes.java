class Solution {
    void swap(int[] nums, int a,int b){
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }
    public void moveZeroes(int[] nums) {
    int n = nums.length;
    int i=0;
    int j=i+1;
    while(j<n){
        if(nums[i]==0 && nums[j]!=0){
            swap(nums,i,j);
            i++;
            j++;
        }
        else if(nums[i]!=0){
            i++;
            j++;
        }
        else j++;
    }    
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna