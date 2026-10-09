class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int maxx = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += nums[i]; 
        sum = max(nums[i],sum);
        maxx = max(sum,maxx);
    }     
    return maxx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna