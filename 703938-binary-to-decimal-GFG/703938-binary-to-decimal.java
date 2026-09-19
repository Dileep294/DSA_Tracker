class Solution {
    public int binaryToDecimal(String b) {
    int base = 1;
    int ans = 0;
    for(int i=b.length()-1; i>=0; i--){
        if(b.charAt(i)=='1'){
           ans += base;
        }
        base *= 2;
    }
    return ans;
        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna