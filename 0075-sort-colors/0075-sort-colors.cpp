class Solution {
public:
    void sortColors(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j]<nums[i]){
                swap(nums[j],nums[i]);
            }
        }
    }   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna