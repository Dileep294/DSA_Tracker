class Solution {
public:
    int maxVowels(string s, int k) {
    int n = s.size();
    if(k>n) return 0;
    int i=0;
    int count=0;
    while(i<k){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') count++;
        i++;
    } 
    int j = k;
    int maxx=count;
    int curr = count;
    while(j<n){
        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') curr++;
        if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u') curr--;
        maxx=max(curr,maxx);
        i++;
        j++;
    }
    return maxx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna