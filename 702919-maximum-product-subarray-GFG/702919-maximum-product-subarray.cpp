class Solution {
  public:
    int maxProduct(vector<int> &arr) {
    int minn = arr[0];
    int maxx = arr[0];
    int ans = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]<0) swap(maxx,minn);
        maxx = max(arr[i],maxx*arr[i]);
        minn = min(arr[i],minn*arr[i]);
        ans = max(ans,maxx);
    }
     return ans;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna