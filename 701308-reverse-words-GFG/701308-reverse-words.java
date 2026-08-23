class Solution {
    public String reverseWords(String s) {
    s =s.replaceAll("^\\.+|\\.+$","");
    String[] word = s.trim().split("\\.+");
    StringBuilder ans = new StringBuilder();
    
    for(int i=word.length-1; i>=0; i--){
        ans.append(word[i]);
        if(i!=0) ans.append('.');
    }
    return ans.toString();    
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna