class Solution {
    public int lengthOfLongestSubstring(String s) {
    int n = s.length();
    HashMap<Character, Integer> mp = new HashMap<>();
    int left=0;
    int maxx = 0;
    for(int i=0; i<n; i++){
        char ch = s.charAt(i);
        mp.put(ch,mp.getOrDefault(ch,0)+1);

        while(mp.get(ch)>1){
            char leftchar = s.charAt(left);
            mp.put(leftchar, mp.get(leftchar)-1);
            left++;
        }
        maxx = Math.max(maxx,i-left+1);
    }
    return maxx;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna