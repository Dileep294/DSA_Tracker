class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
    int n=arr.size();
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        int rem = target - arr[i];
        if(mp.count(rem)){
            return{mp[rem],i};
        }
        mp[arr[i]]=i;
    } 
    return {};   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna