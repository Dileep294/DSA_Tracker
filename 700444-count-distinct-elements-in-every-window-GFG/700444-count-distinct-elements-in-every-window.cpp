class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
    int n = arr.size();
    unordered_map<int , int> mp;
    vector<int> ans;
    for(int i=0; i<k; i++){
        mp[arr[i]]++;
    }
    ans.push_back(mp.size());
    for(int i=k; i<n; i++){
        mp[arr[i-k]]--;
        if(mp[arr[i-k]]==0){
            mp.erase(arr[i-k]);
        }
        mp[arr[i]]++;
        ans.push_back(mp.size());
    }
    return ans;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna