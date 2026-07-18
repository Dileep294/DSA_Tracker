class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    int n = grid.size();
    
    if(grid[0][0]==1 || grid[n-1][n-1]==1){
        return -1;
    }

    queue<pair<int,int>> q;
    q.push({0,0});

    vector<vector<bool>> vis(n, vector<bool>(n,false));
    vis[0][0] = true;

    int count = 1;

    vector<vector<int>> dir = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}};

    while(!q.empty()){
        int N = q.size();

        while(N--){
            auto curr = q.front();
            q.pop();

            int x = curr.first;
            int y = curr.second;

            if(x==n-1 && y==n-1) return count;

            for(auto d : dir){
                int new_i = x + d[0];
                int new_j = y + d[1];

                if(new_i<n && new_i>=0 && new_j<n && new_j>=0 && !vis[new_i][new_j] && grid[new_i][new_j]==0){
                    q.push({new_i,new_j});
                    vis[new_i][new_j]=true;
                }
            }
        }
        count++;
    }
    return -1;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna