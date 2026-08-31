class Solution {
public:
    bool stringStack(string &pat, string &tar) {
        int i = pat.size() - 1;
        int j = tar.size() - 1;

        while (i >= 0 && j >= 0) {

            if (pat[i] != tar[j]) {
                // Current character is used for deletion
                // and deletes the previous character
                i -= 2;
            }
            else {
                // Current character remains in final string
                i--;
                j--;
            }
        }

        return j < 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna