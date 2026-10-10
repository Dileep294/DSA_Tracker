class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    if(n==1) return strs[0];
    sort(strs.begin(),strs.end());
    string first = strs[0];
    string last = strs[n-1];
    int n1 = min(first.size(),last.size());
    string ans = "";
    for(int i=0; i<n1; i++){
       if(first[i]==last[i]) ans += first[i];
       else break;
    }   
    return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna