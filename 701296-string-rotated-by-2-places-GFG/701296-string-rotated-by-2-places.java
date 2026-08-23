class Solution {
    public static boolean isRotated(String s1, String s2) {
    if(s1.length()!=s2.length()) return false;
    if (s1.length() < 2) {
        return s1.equals(s2);
    }
    String s =s1.substring(2) + s1.substring(0,2);
    String t =s1.substring(s1.length()-2) + s1.substring(0,s1.length()-2); 
    if(s.equals(s2) || t.equals(s2)) return true;
    else return false;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna