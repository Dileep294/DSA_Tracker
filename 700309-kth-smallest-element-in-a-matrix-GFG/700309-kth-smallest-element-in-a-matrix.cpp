class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[0].size(); j++){
            pq.push(mat[i][j]);
        }
    }
    int ans=0;
    while(k--){
        ans = pq.top();
        pq.pop();
    }   
    return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna