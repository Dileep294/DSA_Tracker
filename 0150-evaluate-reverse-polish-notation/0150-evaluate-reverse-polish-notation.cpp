class Solution {
public:
    int evalRPN(vector<string>& s) {
    stack<int> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=="+" || s[i]=="-"|| s[i]=="*" || s[i]=="/"){
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            if(s[i]=="+") st.push(x+y);
            else if(s[i]=="-") st.push(y-x);
            else if(s[i]=="*") st.push(y*x);
            else st.push(y/x);
        }
        else st.push(stoi(s[i]));
    } 
    return st.top();   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna