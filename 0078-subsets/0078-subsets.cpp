class Solution {
public:
    void help(vector<int>& arr,vector<vector<int>>& ans,vector<int>& nums,int i){
        if(i==nums.size()){
            ans.push_back(arr);
            return;
        }
        help(arr,ans,nums,i+1);
        arr.push_back(nums[i]);
        help(arr,ans,nums,i+1);
        arr.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> arr;
    vector<vector<int>> ans;
    help(arr,ans,nums,0);
    return ans;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna