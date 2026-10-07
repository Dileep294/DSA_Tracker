class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
    set<int> st;
    for(int it : a){
        st.insert(it);
    }
    for(int it : b){
        st.insert(it);
    } 
    vector<int> ans;
    for(int x : st){
        ans.push_back(x);
    }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna