class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
    int n = arr.size();
    int sum=0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            sum += arr[i]-arr[i-1];
        }
    }
    return sum;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna