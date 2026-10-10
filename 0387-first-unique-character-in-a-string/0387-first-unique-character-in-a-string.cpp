class Solution {
public:
    int firstUniqChar(string s) {
    vector<int> ferq(26,0);
    for(int i=0; i<s.size(); i++){
        ferq[s[i]-'a']++;
    }    
    for(int i=0; i<s.size(); i++){
        if(ferq[s[i]-'a']==1) return i;
    }
    return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna