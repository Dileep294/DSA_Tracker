class Solution {
    public static int countSetBits(int n) {

        int count = 0;

        while (n > 0) {

            // Find the largest power of 2 <= n
            int x = (int)(Math.log(n) / Math.log(2));

            // Number of set bits from 1 to (2^x - 1)
            count += x * (1 << (x - 1));

            // Set bits contributed by numbers from 2^x to n
            count += n - (1 << x) + 1;

            // Remove the highest power of 2
            n = n - (1 << x);
        }

        return count;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna