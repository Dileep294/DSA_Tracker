class Solution {
public:
    void help(vector<vector<int>>& ans, vector<int>& nums, int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int idx = i; idx<nums.size(); idx++){
            swap(nums[i],nums[idx]);
            help(ans,nums,i+1);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    help(ans,nums,0);
    return ans;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna