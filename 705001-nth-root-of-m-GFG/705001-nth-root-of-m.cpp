class Solution {
  public:
    int nthRoot(int n, int m) {
    int ans = pow(m,1.0/n);
    if(pow(ans,n)==m) return ans;
    return -1;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna