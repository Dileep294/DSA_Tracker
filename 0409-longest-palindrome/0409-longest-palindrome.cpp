class Solution {
public:
    int longestPalindrome(string s) {
    unordered_map<char, int> mp;
    for(char c : s){
        mp[c]++;
    }   
    int count=0;
    if(mp.size()==1) return s.size();
    bool hasodd = false;
    for(int i=0; i<mp.size(); i++){
        if(mp[i]%2==0) count += mp[i];
        else{
            hasodd = true;
            count += mp[i]-1;
        }
    } 
    return count + (hasodd ? 1 : 0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna