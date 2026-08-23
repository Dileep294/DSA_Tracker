class Solution {
    String removeDuplicates(String s) {
    String ans="";
    for(int i=0; i<s.length(); i++){
        if(ans.indexOf(s.charAt(i))==-1){
            ans += s.charAt(i);
        }
    }
    return ans;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna