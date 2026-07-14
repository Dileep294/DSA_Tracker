class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {

    unordered_map<int,int> mp;
    for(int i=0; i<arr.size(); i++){
        int tar = target-arr[i];
        
        if(mp.find(tar)!=mp.end()) return true;
        
        mp[arr[i]]++;
    }
    return false;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna