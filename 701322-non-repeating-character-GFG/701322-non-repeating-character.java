class Solution {
    public char nonRepeatingChar(String s) {
    HashMap<Character,Integer> mp= new HashMap<>();
    for(int i=0; i<s.length(); i++){
        char x = s.charAt(i);
        mp.put(x,mp.getOrDefault(x,0)+1);
    }
    for(int i=0; i<s.length(); i++){
        char ch = s.charAt(i);
        if(mp.get(ch)==1) return ch;
    }
    return '$';
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna