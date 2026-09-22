class Solution {
    public static int trailingZeroes(int n) {
    int x = n;
    int count=0;
    while(x>0){
        count += x/5;
        x = x/5;
    }
    return count;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna