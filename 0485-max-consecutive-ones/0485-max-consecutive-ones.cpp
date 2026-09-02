class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int n=nums.size();
    int count=0;
    int maxx=0;
    for(int i=0; i<n; i++){
        if(nums[i]==1){
            count++;
            maxx=max(maxx,count);
        }
        else count=0;      
    } 
    return maxx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna