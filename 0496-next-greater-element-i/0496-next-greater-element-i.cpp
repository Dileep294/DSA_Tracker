class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    for(int i=0; i<nums1.size(); i++){
        int neg = -1;
        for(int j=0; j<nums2.size(); j++){
            if(nums1[i]==nums2[j]){
               for(int k=j+1; k<nums2.size(); k++){
                   if(nums2[k]>nums1[i]){
                      neg = nums2[k];
                      break;
                   }
               }  
               break;
            }
        }
        ans.push_back(neg);
    }  
    return ans;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna