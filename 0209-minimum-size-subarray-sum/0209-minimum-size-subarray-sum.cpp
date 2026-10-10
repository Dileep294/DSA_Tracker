class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    vector<int> pre;
    int sum = 0;
    pre.push_back(sum);
    int n = nums.size();
    for(int i=0; i<nums.size(); i++){
        sum += nums[i];
        pre.push_back(sum);
    } 
    int i=0;
    int j = i+1;
    int maxx=INT_MAX;
    while(j<n+1){
        if(pre[j]-pre[i]>=target){
            int curr = j-i;
            maxx = min(curr,maxx);
            i++;
        }
        else j++;
        if(i==j) j++;
    }   
    if(maxx==INT_MAX) return 0;
    return maxx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna