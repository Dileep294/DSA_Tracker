class Solution {
public:
    bool canJump(vector<int>& nums) {
    int n = nums.size();
    int sum =0;
    for(int i=0; i<n; i++){
        if(i>sum) return false;
        sum = max(sum, i+nums[i]);
        if(sum>n-1) return true;
    }    
    return 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna