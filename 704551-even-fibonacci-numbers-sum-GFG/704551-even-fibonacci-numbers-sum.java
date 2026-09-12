class Solution {
    public int evenFibSum(int n) {
        // code here
    int a = 1;
    int b=1;
    int sum = 0;
    while(a<=n){
        if(a%2==0){
            sum += a;
        }
        int c = a+b;
        a = b;
        b = c;
    }
    return sum;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna