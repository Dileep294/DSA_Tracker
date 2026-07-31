class Solution {
  public:
    vector<int> mem;
    int dp(vector<int>& arr,int i){
        if(i>=arr.size()) return 0;
        if(mem[i] != -1) return mem[i];
        int take = arr[i] + dp(arr,i+2);
        int ntake = dp(arr,i+1);
        
        return mem[i] = max(take,ntake);
    }
    int findMaxSum(vector<int>& arr) {
    int n = arr.size();
    mem.assign(n,-1);
    return dp(arr,0); 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna