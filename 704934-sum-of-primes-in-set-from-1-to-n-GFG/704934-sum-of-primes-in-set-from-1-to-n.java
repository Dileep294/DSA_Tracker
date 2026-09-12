class Solution {
    boolean check(int n){
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
    public int primeSum(int n) {
    int sum=0;
    for(int i=2; i<=n; i++){
        if(check(i)){
            sum += i;
        }
    }
    return sum;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna