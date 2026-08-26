class Solution {
public:
    string rearrange(string s) {
        string vowel = "";
        string consonent = "";

        for (char ch : s) {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowel += ch;
            } else {
                consonent += ch;
            }
        }

        // Alternation is impossible
        if (abs((int)vowel.size() - (int)consonent.size()) > 1) {
            return "-1";
        }

        // Sort to get lexicographically smallest order
        sort(vowel.begin(), vowel.end());
        sort(consonent.begin(), consonent.end());

        string ans = "";
        int i = 0, j = 0;

        // If consonants are more, they must come first
        if (consonent.size() > vowel.size()) {
            while (i < vowel.size() && j < consonent.size()) {
                ans += consonent[j++];
                ans += vowel[i++];
            }
            if (j < consonent.size()) {
                ans += consonent[j];
            }
        } 
        // If vowels are more, they must come first
        else if (vowel.size() > consonent.size()) {
            while (i < vowel.size() && j < consonent.size()) {
                ans += vowel[i++];
                ans += consonent[j++];
            }
            if (i < vowel.size()) {
                ans += vowel[i];
            }
        } 
        // Equal number: choose lexicographically smaller starting character
        else {
            bool startVowel = vowel[0] < consonent[0];

            while (i < vowel.size() && j < consonent.size()) {
                if (startVowel) {
                    ans += vowel[i++];
                    ans += consonent[j++];
                } else {
                    ans += consonent[j++];
                    ans += vowel[i++];
                }
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna