class Solution {
public:
    string decodeString(string s) {

        stack<int> numStack;
        stack<string> stringStack;

        int k = 0;

        for (char c : s) {

            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            }

            else if (c == '[') {
                numStack.push(k);
                k = 0;
                stringStack.push("[");
            }

            else if (c != ']') {
                stringStack.push(string(1, c));
            }

            else {
                string temp = "";

                while (stringStack.top() != "[") {
                    temp = stringStack.top() + temp;
                    stringStack.pop();
                }

                stringStack.pop();

                int count = numStack.top();
                numStack.pop();

                string replacement = "";

                for (int i = 0; i < count; i++) {
                    replacement += temp;
                }

                stringStack.push(replacement);
            }
        }

        string result = "";

        while (!stringStack.empty()) {
            result = stringStack.top() + result;
            stringStack.pop();
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna