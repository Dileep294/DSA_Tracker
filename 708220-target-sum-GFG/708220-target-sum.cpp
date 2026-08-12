class Solution {
  public:
    map<pair<int,int>,int> dp;
    int help(vector<int>& arr,int target,int i,int curr){
        if(i==arr.size()){
            return curr==target;
        }
        pair<int,int> state = {i,curr};
        if(dp.count(state)) return dp[state];
        int add = help(arr,target,i+1,curr+arr[i]);
        int sub = help(arr,target,i+1,curr-arr[i]);
        return dp[state] = add + sub;
    }
    int totalWays(vector<int>& arr, int target) {
    dp.clear();
    return help(arr,target,0,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna