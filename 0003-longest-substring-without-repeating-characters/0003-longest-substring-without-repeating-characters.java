class Solution {
    public int lengthOfLongestSubstring(String s) {
    if(s.length()==1) return 1;
    int[] freq = new int[256];
    for(int i=0; i<256; i++) 
    freq[i] = -1;
    int maxx = 0;
    int start = -1;
    for(int i=0; i<s.length(); i++){
        char ch = s.charAt(i);
        if(freq[ch]>start){
            start = freq[ch];
        }
        maxx = Math.max(maxx,i-start);
        freq[ch]=i;
    }   
    return maxx;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna