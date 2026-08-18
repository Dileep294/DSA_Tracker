class Solution {
    public boolean isValid(String s) {
    int n = s.length();
    Stack<Character> st = new Stack<>();
    for(int i=0; i<n; i++){
        if(s.charAt(i)=='(' || s.charAt(i)=='{' || s.charAt(i)=='['){
            st.push(s.charAt(i));
        }else{
            if(st.isEmpty()) return false;
            if(s.charAt(i)==')' && st.peek()=='(') st.pop();
            else if(s.charAt(i)=='}' && st.peek()=='{') st.pop();
            else if(s.charAt(i)==']' && st.peek()=='[') st.pop();
            else return false;
        }
    }    
    return st.isEmpty();
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna