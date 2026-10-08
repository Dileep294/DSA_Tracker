class Solution {
  public:
    void sortStack(stack<int> &st) {
    vector<int> ans;
    while(st.size()>0){
        ans.push_back(st.top());
        st.pop();
    }
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++){
        st.push(ans[i]);
    }
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna