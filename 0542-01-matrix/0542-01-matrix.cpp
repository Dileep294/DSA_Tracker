class Solution {
public:
    int n,m;
    vector<vector<int>> dir = {{0,1},{0,-1},{1,0},{-1,0}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> ans(n, vector<int>(m, -1));
    queue<pair<int,int>> que;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]==0){
                ans[i][j] = 0;
                que.push({i,j});
            }
        }
    }  
    while(!que.empty()){
        pair<int,int> p = que.front();
        que.pop();

        int i = p.first;
        int j = p.second;

        for(auto &it : dir){
            int new_i = i+it[0];
            int new_j = j+it[1];

            if(new_i<n && new_i>=0 && new_j<m && new_j>=0 && ans[new_i][new_j]==-1){
                ans[new_i][new_j] = 1 + ans[i][j];
                que.push({new_i,new_j});
            }
        }
    }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna