class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int minn = nums[0];
    int maxx = nums[0];
    int ans = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i]<0) swap(minn,maxx);
        maxx = max(nums[i],maxx*nums[i]);
        minn = min(nums[i],minn*nums[i]);
        ans = max(ans,maxx);
    }
    return ans;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna