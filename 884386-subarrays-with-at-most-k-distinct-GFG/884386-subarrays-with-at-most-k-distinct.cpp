class Solution {
  public:
    int fun(vector<int>& arr , int k){
        int l=0,r=0,count=0;
        unordered_map<int,int> mp;
        while(r<arr.size()){
            mp[arr[r]]++;
            while(mp.size()>k){
                mp[arr[l]]--;
                if(mp[arr[l]]==0){
                    mp.erase(arr[l]);
                }
                l++;
            }
            count = count + r-l+1;
            r++;
        }
        return count;
    }
    int countAtMostK(vector<int> &arr, int k) {
    return fun(arr,k);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna