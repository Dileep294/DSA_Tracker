class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    if(n==1 && m==1) return 0;
    priority_queue<
            pair<int, pair<int,int>>,
            vector<pair<int, pair<int,int>>>,
            greater<>> q;
    vector<vector<int>> vis(n, vector<int>(m, INT_MAX));
    vis[0][0] = grid[0][0];
    q.push({grid[0][0],{0,0}});
    vector<vector<int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};
    int maxx = 0;
    while(!q.empty()){
            auto curr = q.top();
            q.pop();

            int effort = curr.first;
            int x = curr.second.first;
            int y = curr.second.second;

            if(x==n-1 && y==n-1) return effort;

            for(auto &d : dir){
                int new_x = x + d[0];
                int new_y = y + d[1];

                if(new_x < n && new_x >=0 && new_y>=0 && new_y<m){
                    
                    int neweffort = max(effort,grid[new_x][new_y]);
                    

                    if(neweffort  < vis[new_x][new_y]){
                        vis[new_x][new_y] = neweffort;
                        q.push({neweffort,{new_x,new_y}});
                    }
                }
            }
    } 
    return 0;       
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna