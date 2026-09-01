class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
    sort(intervals.begin(),intervals.end());
    vector<pair<int,int>> ans;
    ans.push_back({intervals[0][0],intervals[0][1]});
    int count = 0;
    for(int i=1; i<intervals.size(); i++){
        if(ans.back().second > intervals[i][0]){
            count++;
            ans.back().second = min(ans.back().second, intervals[i][1]);
        }
        else{
            ans.push_back({intervals[i][0],intervals[i][1]});
        }
    }
    return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna