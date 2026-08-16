class Solution {
    public boolean isPalindrome(int x) {
    if(x<0) return false;
    String s = String.valueOf(x);
    int n = s.length();
    int i=0, j=n-1;
    while(i<j){
        if(s.charAt(i) != s.charAt(j)) return false;
        i++;
        j--;
    }  
    return true;  
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna