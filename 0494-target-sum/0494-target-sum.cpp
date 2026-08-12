class Solution {
public:
    map<pair<int,int>,int> dp;
    int help(vector<int>& nums,int count,int target,int i){
        if(i==nums.size()){
            return count==target;
        }
        pair<int,int> status = {i,count};
        if(dp.count(status)) return dp[status];
        int take = help(nums,count+nums[i],target,i+1);
        int leave = help(nums,count-nums[i],target,i+1);
        
        return dp[status]=take+leave;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
    //dp.clean();
    return help(nums,0,target,0);    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna