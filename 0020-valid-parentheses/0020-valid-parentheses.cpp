class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }else{
        if(st.size()==0) return false;
        if(s[i]==')' && st.top()=='(') st.pop();
        else if(s[i]=='}' && st.top()=='{') st.pop();
        else if(s[i]==']' && st.top()=='[') st.pop();
        else return false;
        }
    }
    if(st.size()!=0) return false;
    else return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna