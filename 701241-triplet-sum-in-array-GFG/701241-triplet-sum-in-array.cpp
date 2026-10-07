class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
    sort(arr.begin(),arr.end());
    int n = arr.size();
    for(int i=0; i<n; i++){
        int left = i+1;
        int right = n-1;
        while(left<right){
            int sum = arr[i]+arr[left]+arr[right];
            if(sum==target) return true;
            else if(sum<target) left++;
            else right--;
        }
    }
    return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna