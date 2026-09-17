class Solution {
    public static char getMaxOccuringChar(String s) {
    int[] arr = new int[26];
    for(int i=0; i<s.length(); i++){
        arr[s.charAt(i)-97]++;
    }
    int maxx = Integer.MIN_VALUE;
    char ch='0';
    for(int i=0; i<26; i++){
        if(arr[i]>maxx){
        maxx = arr[i];
        ch = (char)(i+97);
        }
    }
    return ch;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna