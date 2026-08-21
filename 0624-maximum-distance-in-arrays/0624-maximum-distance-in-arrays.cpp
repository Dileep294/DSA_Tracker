class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
    int n = arrays.size();
    int minn = arrays[0][0];
    int maxx = arrays[0].back();
    int ans =0;
    for(int i=1; i<n; i++){
        int currmin = arrays[i][0];
        int currmax = arrays[i].back();
        ans = max(ans,abs(maxx-currmin));
        ans = max(ans,abs(currmax-minn));
        minn = min(minn,currmin);
        maxx = max(maxx,currmax);
    }   
    return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna