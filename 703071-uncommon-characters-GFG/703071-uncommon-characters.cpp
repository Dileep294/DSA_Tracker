
class Solution {
public:
    string uncommonChars(string& s1, string& s2) {
        vector<int> freq1(26, 0), freq2(26, 0);

        for (char c : s1) {
            freq1[c - 'a'] = 1;
        }

        for (char c : s2) {
            freq2[c - 'a'] = 1;
        }

        string ans = "";

        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                ans += char(i + 'a');
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna