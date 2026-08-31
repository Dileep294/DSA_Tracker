class Solution {
public:
    int thirdMax(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return nums[0];
    if(n==2) return max(nums[0],nums[1]);
    long long maxx = LLONG_MIN;
    for(int i=0; i<n; i++){
        maxx = max(maxx,(long long)nums[i]);
    } 
    long long smax=LLONG_MIN;
    for(int i=0; i<n; i++){
        if(nums[i]==maxx) continue;
        smax = max((long long)nums[i],smax);
    }   
    long long tmax=LLONG_MIN;
    for(int i=0; i<n; i++){
        if(nums[i]==maxx) continue;
        if(nums[i]==smax) continue;
        tmax = max((long long)nums[i],tmax);
    }
    if(tmax==LLONG_MIN) return maxx;
    return tmax;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna