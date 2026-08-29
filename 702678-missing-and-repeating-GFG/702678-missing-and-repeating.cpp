class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int a = 0;  // repeating
        int b = 0;  // missing

        vector<bool> count(n + 1, false);

        // Find repeating element and mark elements
        for (int i = 0; i < n; i++) {
            if (i > 0 && arr[i] == arr[i - 1]) {
                a = arr[i];
            }

            count[arr[i]] = true;
        }

        // Find missing element
        for (int i = 1; i <= n; i++) {
            if (count[i] == false) {
                b = i;
                break;
            }
        }

        return {a, b};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna