class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int c : nums){
        mp[c]++;
    }
    for(auto & it : mp){
        if(it.second>1) return it.first;
    }
    return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna