class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=0; i<arr.size(); i++){
        if(i==k-1) return arr[i];
    }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna