class Solution {
    static boolean armstrongNumber(int n) {
    int temp = n;
    int a = temp%10;
    temp = temp/10;
    int b = temp%10;
    int c = temp/10;
    int x = a*a*a + b*b*b + c*c*c;
    if(x==n) return true;
    else return false;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna