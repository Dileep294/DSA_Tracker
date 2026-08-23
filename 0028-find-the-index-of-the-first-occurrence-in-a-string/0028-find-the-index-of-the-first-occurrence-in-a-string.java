class Solution {
    public int strStr(String haystack, String needle) {
    if(needle.length()==0) return -1;
    if(!haystack.contains(needle)) return -1;
    return haystack.indexOf(needle);   
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna