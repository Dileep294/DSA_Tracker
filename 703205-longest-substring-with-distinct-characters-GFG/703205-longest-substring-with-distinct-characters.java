class Solution {
    public int longestUniqueSubstr(String s) {
        HashMap<Character,Integer> mp = new HashMap<>();
        int left=0;
        int maxx = 0;
        for(int right=0; right<s.length(); right++){
            char ch = s.charAt(right);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
            
            while(mp.get(ch)>1){
                char leftchar = s.charAt(left);
                mp.put(leftchar,mp.get(leftchar)-1);
                
                left++;
            }
            maxx = Math.max(maxx,right-left+1);
        }
        return maxx;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna