class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int,int> mp;
    int n = nums.size();
    for(int it : nums){
        mp[it]++;
    }  
    for(auto it : mp){
        if(it.second > n/2) return it.first;
    } 
    return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna