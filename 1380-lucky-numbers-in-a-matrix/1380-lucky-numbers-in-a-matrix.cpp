class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row;
    for(int i=0; i<n; i++){
        int minn=matrix[i][0];
        for(int j=1; j<m; j++){
            minn = min(minn,matrix[i][j]);
        }
        row.push_back(minn);
    } 
    vector<int> colom;
    for(int j=0; j<m; j++){
        int maxx = matrix[0][j];
        for(int i=1; i<n; i++){
            maxx = max(maxx,matrix[i][j]);
        }
        colom.push_back(maxx);
    }  
    for(int i=0; i<row.size(); i++){
        for(int j=0; j<colom.size(); j++){
            if(row[i]==colom[j]) return {row[i]};
        }
    } 
    return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna