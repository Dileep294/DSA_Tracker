class Solution {
    static String decToBinary(int n) {
    StringBuilder str = new StringBuilder();
    int a = n;
    while(a>0){
        str.append(a%2);
        a /= 2;
    }
    return str.reverse().toString();
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna