class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
    int n = arr.size();
    int sum = arr[0];
    for(int i=0; i<n; i++){
        if(i > sum) return false;
        sum = max(sum, i+arr[i]);
    }
    return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna