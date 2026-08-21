class Solution {
public:
    int help(long long n){
        if(n==1) return 0;
        if(n%2==0){
           return 1 + help(n/2);
        }else{
            return 1 + min(help(n+1),help(n-1));
        }
    }
    int integerReplacement(int n) {
    return help((long long)n);    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna