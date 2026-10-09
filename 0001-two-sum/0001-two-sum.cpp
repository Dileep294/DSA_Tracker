class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int , int> mp;
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        int tar = target-nums[i];
        if(mp.find(tar)!=mp.end()){
            for(int j=0; j<i; j++){
                if(tar==nums[j]){
                   ans.push_back(i);
                   ans.push_back(j);
                   break;
                }
            }
        }
        else mp[nums[i]]++;
    } 
    return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna