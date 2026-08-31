class Solution {
  public:
    vector<vector<int>> dp;
    bool help(vector<int>& arr, int i,int tar){
        if(tar==0) return true;
        if(i>=arr.size() || tar<0) return false;
        if(dp[i][tar]!=-1) return dp[i][tar];
        return dp[i][tar]=help(arr,i+1,tar-arr[i]) || help(arr,i+1,tar);
    }
    bool equalPartition(vector<int>& arr) {
    int sum=0;
    for(int x : arr){
        sum += x;
    }
    int n = arr.size();
    dp.assign(n+1,vector<int>(sum+1,-1));
    if(sum%2!=0) return false;
    return help(arr,0,sum/2);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna