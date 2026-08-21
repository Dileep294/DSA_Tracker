class Solution {
public:
    void help(vector<int>& candidates,int target,int i,vector<vector<int>>& ans,vector<int>& v){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(target<0) return;
        for(int k=i; k<candidates.size(); k++){
            v.push_back(candidates[k]);
            help(candidates,target-candidates[k],k,ans,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> v;
    help(candidates,target,0,ans,v);   
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna