class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
    stack<int> st;
    int n = nums.size();
    vector<int> ans(n,0);
    for(int i=nums.size()-1; i>=0; i--){
        while(!st.empty() && nums[i]>=nums[st.top()]){
            st.pop();
        }
        if(st.empty()) ans[i]=0;
        else ans[i]= st.top()-i;
        st.push(i);
    }  
    return ans;     
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna