class Solution {
public:
    string findSum(string &s1, string &s2) {
        int n = s1.size();
        int m = s2.size();

        int i = n - 1;
        int j = m - 1;

        int c = 0;
        string ans = "";

        while (i >= 0 && j >= 0) {
            int a = s1[i] - '0';
            int b = s2[j] - '0';

            int sum = a + b + c;

            ans += to_string(sum % 10);
            c = sum / 10;

            i--;
            j--;
        }

        while (i >= 0) {
            int a = s1[i] - '0';

            int sum = a + c;

            ans += to_string(sum % 10);
            c = sum / 10;

            i--;
        }

        while (j >= 0) {
            int b = s2[j] - '0';

            int sum = b + c;

            ans += to_string(sum % 10);
            c = sum / 10;

            j--;
        }

        if (c > 0) {
            ans += to_string(c);
        }

        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        int pos = 0;

        while (pos < ans.size() - 1 && ans[pos] == '0') {
            pos++;
        }

        return ans.substr(pos);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna