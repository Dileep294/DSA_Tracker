class Solution {
public:
    string simplifyPath(string path) {
    auto result = std::filesystem::path(path).lexically_normal().string();
    while(result.size() > 1 && result.back() == '/') {
    result.pop_back();
    }
    return result;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna