class Solution {
    public int longestContinuousSubstring(String s) {
    if(s.length()==1) return 1;
    int curr=1;
    int maxx=1;
    for(int i=1; i<s.length(); i++){
        char ch = s.charAt(i);
        char sh = s.charAt(i-1);
        if(ch==sh+1){
            curr++;
            maxx = Math.max(curr,maxx);
        }else{
            curr=1;
        }
    }  
    return maxx; 
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna