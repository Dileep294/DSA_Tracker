class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int i=0;
        int j=n-1;
        int maxx = 0; 
    while(i<j){
        int curr = (j-i) * min(arr[i],arr[j]);
        maxx = max(curr,maxx);
        if(arr[i]<arr[j]) i++;
        else j--;
    }
    return maxx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna