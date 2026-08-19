class Solution {
    public boolean isBalanced(String s) {
    int n = s.length();
    if(n%2!=0) return false;
    Stack<Character> st = new Stack<>();
    int i=0;
    while(i<n){
        char ch = s.charAt(i);
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }
        else{
            if(st.isEmpty()) return false;
            if(ch==')' && st.peek()=='(') st.pop();
            else if(ch=='}' && st.peek()=='{') st.pop();
            else if(ch==']' && st.peek()=='[') st.pop();
            else return false;
        }
        i++;
    }
    if(!st.isEmpty()) return false;
    return true;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna