class Solution {
public:
    int jump(vector<int>& nums) {
    int n = nums.size();
    int jump=0;
    int end = 0;
    int farthest = 0;
    for(int i=0; i<n-1; i++){
        farthest = max(farthest, i + nums[i]);

        if(i==end){
            jump++;
            end = farthest;
        }
    } 
    return jump;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna