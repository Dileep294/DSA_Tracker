class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum=0;
    int t_sum=n*(n+1)/2;
    for(int it : nums){
        sum += it;
    } 
    return t_sum-sum;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna