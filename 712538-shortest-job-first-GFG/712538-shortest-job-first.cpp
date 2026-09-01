class Solution {
  public:
    int solve(vector<int>& bt) {
    sort(bt.begin(),bt.end());
    int n = bt.size();
    int sum = bt[0];
    vector<int> pre;
    pre.push_back(bt[0]);
    for(int i=1; i<n; i++){
        sum += bt[i]; 
        pre.push_back(sum);
    }
    int ans = 0;
    for(int i=0; i<pre.size()-1; i++){
        ans += pre[i];
    }
    return ans/n;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna