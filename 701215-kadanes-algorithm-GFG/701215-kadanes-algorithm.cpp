class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
    int curr = 0;
    int maxx = INT_MIN;
    for(int x : arr){
        curr = max(x,curr+x);
        maxx = max(curr,maxx);
    }
    return maxx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna