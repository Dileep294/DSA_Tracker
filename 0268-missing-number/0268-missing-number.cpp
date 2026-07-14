class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n =  nums.size();
    int osum = n*(n+1)/2;
    int sum = 0;
    for(int &it : nums){
        sum += it;
    }   
    return osum-sum; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna