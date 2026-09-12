class Solution {
    static int gcd(int a, int b){
        while(b!=0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }
    public static int[] lcmAndGcd(int a, int b) {
    int[] ans = new int[2];
    int x = gcd(a,b);
    int y = (a/x)*b;
    ans[0] = y;
    ans[1] = x;
    return ans;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna