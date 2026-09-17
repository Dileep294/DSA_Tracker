class Solution {
    int floorSqrt(int n) {
    if(n<4) return 1;
    int take = 0;
    for(int i=1; i<n; i++){
        if(i*i==n || i*i<n){
            take = i;
        }
    }
    return take;   
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna