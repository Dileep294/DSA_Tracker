class Solution {
public:
    int nextGreaterElement(int n) {
    string s = to_string(n);
    if(!next_permutation(s.begin(),s.end())){
        return -1;
    }
    long long x = stoll(s);

    if(x > INT_MAX) return -1;

    return (int)x;
     
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna